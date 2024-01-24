#include "Application.h"

APPLICATION_REGISTER_ENTRY(NULL, 0);
APPLICATION_REGISTER_ENTRY(NULL, 9);

/*APPLICATION ENTRY*/
static struct rt_mailbox mMB;
static size_t mPool[8];
int main(void)
{
    for (const Application_EntryType *e = (&mApplication_Entry_NULL_0) + 1; e < &mApplication_Entry_NULL_9; e++)
    {
        e->Action();
    }
    rt_mb_init(&mMB, "mbt", &mPool[0], sizeof(mPool), RT_IPC_FLAG_FIFO);
    while (1)
    {
        ActionType act;
        if (rt_mb_recv(&mMB, (rt_ubase_t *)&act, RT_WAITING_FOREVER) == RT_EOK)
        {
            act();
        }
    }
}

/*APPLICATION COMMAND*/
APPLICATION_REGISTER_COMMAND("", NULL, 10);
APPLICATION_REGISTER_COMMAND("", NULL, 20);
APPLICATION_REGISTER_COMMAND("", NULL, 30);
APPLICATION_REGISTER_COMMAND("", NULL, 40);
APPLICATION_REGISTER_COMMAND("", NULL, 50);
APPLICATION_REGISTER_COMMAND("", NULL, 60);
APPLICATION_REGISTER_COMMAND("", NULL, 70);
APPLICATION_REGISTER_COMMAND("", NULL, 80);
APPLICATION_REGISTER_COMMAND("", NULL, 90);

bool Application_Execute(uint8_t level, const char *name, void *parameter)
{
    bool r = false;
    const Application_CommandType *b = NULL, *e = NULL;
    if (level == 1)
    {
        b = &mApplication_Command_NULL_10;
        e = &mApplication_Command_NULL_20;
    }
    else if (level == 2)
    {
        b = &mApplication_Command_NULL_20;
        e = &mApplication_Command_NULL_30;
    }
    else if (level == 3)
    {
        b = &mApplication_Command_NULL_30;
        e = &mApplication_Command_NULL_40;
    }
    else if (level == 4)
    {
        b = &mApplication_Command_NULL_40;
        e = &mApplication_Command_NULL_50;
    }
    else if (level == 5)
    {
        b = &mApplication_Command_NULL_50;
        e = &mApplication_Command_NULL_60;
    }
    else if (level == 6)
    {
        b = &mApplication_Command_NULL_60;
        e = &mApplication_Command_NULL_70;
    }
    else if (level == 7)
    {
        b = &mApplication_Command_NULL_70;
        e = &mApplication_Command_NULL_80;
    }
    else if (level == 8)
    {
        b = &mApplication_Command_NULL_80;
        e = &mApplication_Command_NULL_90;
    }
    for (++b; b < e; b++)
    {
        if (strcmp(b->Name, name) == 0)
        {
            b->Action(parameter);
            r = true;
            break;
        }
    }
    return r;
}

void Application_Invoke(ActionType action)
{
    if (action)
    {
        rt_mb_send(&mMB, (rt_ubase_t)action);
    }
}
