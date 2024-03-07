#include "Application.h"

APPLICATION_REGISTER_ENTRY(NULL, 0);
APPLICATION_REGISTER_ENTRY(NULL, 9);

/*APPLICATION ENTRY*/
static struct rt_mailbox mInvoker;
static size_t mPool[APPLICATION_INVOKE_COUNT];
int main(void)
{
    rt_mb_init(&mInvoker, "invoker", mPool, sizeof(mPool), RT_IPC_FLAG_FIFO);
    for (const Application_EntryType *e = (&mAPP_Entry_NULL_0) + 1; e < &mAPP_Entry_NULL_9; e++)
    {
        e->Action();
    }
    while (1)
    {
        ActionType act;
        if (rt_mb_recv(&mInvoker, (rt_ubase_t *)&act, RT_WAITING_FOREVER) == RT_EOK)
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

const Application_CommandType *Application_GetCommand(uint8_t group, const char *name)
{
    const Application_CommandType *b = NULL, *e = NULL;
    if (group == 1)
    {
        b = &mAPP_Command_NULL_10;
        e = &mAPP_Command_NULL_20;
    }
    else if (group == 2)
    {
        b = &mAPP_Command_NULL_20;
        e = &mAPP_Command_NULL_30;
    }
    else if (group == 3)
    {
        b = &mAPP_Command_NULL_30;
        e = &mAPP_Command_NULL_40;
    }
    else if (group == 4)
    {
        b = &mAPP_Command_NULL_40;
        e = &mAPP_Command_NULL_50;
    }
    else if (group == 5)
    {
        b = &mAPP_Command_NULL_50;
        e = &mAPP_Command_NULL_60;
    }
    else if (group == 6)
    {
        b = &mAPP_Command_NULL_60;
        e = &mAPP_Command_NULL_70;
    }
    else if (group == 7)
    {
        b = &mAPP_Command_NULL_70;
        e = &mAPP_Command_NULL_80;
    }
    else if (group == 8)
    {
        b = &mAPP_Command_NULL_80;
        e = &mAPP_Command_NULL_90;
    }
    for (b++; b < e; b++)
    {
        if (strcmp(b->Name, name) == 0)
        {
            e = b;
            break;
        }
    }
    return e;
}

void Application_Invoke(ActionType action)
{
    if (action)
    {
        rt_mb_send(&mInvoker, (rt_ubase_t)action);
    }
}
