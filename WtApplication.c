#include <WtApplication.h>
WT_APPLICATION_REGISTER_ENTRY(NULL, 0);
WT_APPLICATION_REGISTER_ENTRY(NULL, 9);

/*APPLICATION ENTRY*/
static struct rt_mailbox mInvoker;
static size_t mPool[WT_APPLICATION_INVOKER_COUNT];
int main(void)
{
    rt_mb_init(&mInvoker, "invoker", mPool, sizeof(mPool), RT_IPC_FLAG_FIFO);
    for (const WtApplication_EntryType *e = (&mApp_Entry_NULL_0) + 1; e < &mApp_Entry_NULL_9; e++)
    {
        e->Entry();
    }
    while (1)
    {
        WtActionType act;
        if (rt_mb_recv(&mInvoker, (rt_ubase_t *)&act, RT_WAITING_FOREVER) == RT_EOK)
        {
            act();
        }
    }
}

/*APPLICATION COMMAND*/
WT_APPLICATION_REGISTER_COMMAND("", NULL, 10);
WT_APPLICATION_REGISTER_COMMAND("", NULL, 20);
WT_APPLICATION_REGISTER_COMMAND("", NULL, 30);
WT_APPLICATION_REGISTER_COMMAND("", NULL, 40);
WT_APPLICATION_REGISTER_COMMAND("", NULL, 50);
WT_APPLICATION_REGISTER_COMMAND("", NULL, 60);
WT_APPLICATION_REGISTER_COMMAND("", NULL, 70);
WT_APPLICATION_REGISTER_COMMAND("", NULL, 80);
WT_APPLICATION_REGISTER_COMMAND("", NULL, 90);

const WtApplication_CommandType *WtApplication_GetCommand(const char *name, uint8_t group)
{
    const WtApplication_CommandType *b = NULL, *e = NULL;
    if (group == 1)
    {
        b = &mApp_Command_NULL_10;
        e = &mApp_Command_NULL_20;
    }
    else if (group == 2)
    {
        b = &mApp_Command_NULL_20;
        e = &mApp_Command_NULL_30;
    }
    else if (group == 3)
    {
        b = &mApp_Command_NULL_30;
        e = &mApp_Command_NULL_40;
    }
    else if (group == 4)
    {
        b = &mApp_Command_NULL_40;
        e = &mApp_Command_NULL_50;
    }
    else if (group == 5)
    {
        b = &mApp_Command_NULL_50;
        e = &mApp_Command_NULL_60;
    }
    else if (group == 6)
    {
        b = &mApp_Command_NULL_60;
        e = &mApp_Command_NULL_70;
    }
    else if (group == 7)
    {
        b = &mApp_Command_NULL_70;
        e = &mApp_Command_NULL_80;
    }
    else if (group == 8)
    {
        b = &mApp_Command_NULL_80;
        e = &mApp_Command_NULL_90;
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

void WtApplication_Invoke(WtActionType action)
{
    if (action)
    {
        rt_mb_send(&mInvoker, (rt_ubase_t)action);
    }
}
