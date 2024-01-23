#include "Application.h"

static void Entry0(void)
{
}
APPLICATION_REGISTER_ENTRY(Entry0, "0");
static void Entry9(void)
{
}
APPLICATION_REGISTER_ENTRY(Entry9, "9");

/*APPLICATION ENTRY*/
static struct rt_mailbox mMB;
static char mPool[32];
int main(void)
{
    for (const Application_EntryType *et = &mApplication_Entry_Entry0; et < &mApplication_Entry_Entry9; et++)
    {
        et->Action();
    }
    rt_mb_init(&mMB, "mbt", &mPool[0], sizeof(mPool) / 4, RT_IPC_FLAG_FIFO);    
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
static void Command0e(void *parameter)
{
}
APPLICATION_REGISTER_COMMAND("", Command0e, "0.e");
static void Command1e(void *parameter)
{
}
APPLICATION_REGISTER_COMMAND("", Command1e, "1.e");
static void Command2e(void *parameter)
{
}
APPLICATION_REGISTER_COMMAND("", Command2e, "2.e");
static void Command3e(void *parameter)
{
}
APPLICATION_REGISTER_COMMAND("", Command3e, "3.e");
static void Command4e(void *parameter)
{
}
APPLICATION_REGISTER_COMMAND("", Command4e, "4.e");
static void Command5e(void *parameter)
{
}
APPLICATION_REGISTER_COMMAND("", Command5e, "5.e");
static void Command6e(void *parameter)
{
}
APPLICATION_REGISTER_COMMAND("", Command6e, "6.e");
static void Command7e(void *parameter)
{
}
APPLICATION_REGISTER_COMMAND("", Command7e, "7.e");
static void Command8e(void *parameter)
{
}
APPLICATION_REGISTER_COMMAND("", Command8e, "8.e");

bool Application_Execute(uint8_t level, const char *name, void *parameter)
{
    bool r = false;
    const Application_CommandType *b, *e;
    if (level == 1)
    {
        b = &mApplication_Command_Command0e;
        e = &mApplication_Command_Command1e;
    }
    else if (level == 2)
    {
        b = &mApplication_Command_Command1e;
        e = &mApplication_Command_Command2e;
    }
    else if (level == 3)
    {
        b = &mApplication_Command_Command2e;
        e = &mApplication_Command_Command3e;
    }
    else if (level == 4)
    {
        b = &mApplication_Command_Command3e;
        e = &mApplication_Command_Command4e;
    }
    else if (level == 5)
    {
        b = &mApplication_Command_Command4e;
        e = &mApplication_Command_Command5e;
    }
    else if (level == 6)
    {
        b = &mApplication_Command_Command5e;
        e = &mApplication_Command_Command6e;
    }
    else if (level == 7)
    {
        b = &mApplication_Command_Command6e;
        e = &mApplication_Command_Command7e;
    }
    else if (level == 8)
    {
        b = &mApplication_Command_Command7e;
        e = &mApplication_Command_Command8e;
    }
    else
    {
        b = &mApplication_Command_Command0e;
        e = &mApplication_Command_Command8e;
    }
    for (; b < e; b++)
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
