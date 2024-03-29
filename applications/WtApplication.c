#include <WtApplication.h>
WT_APPLICATION_REGISTER_ENTRY(NULL, 0, 0);
WT_APPLICATION_REGISTER_ENTRY(NULL, 0, 9);

/*APPLICATION ENTRY*/
static struct rt_mailbox mInvoker;
static size_t mPool[WT_APPLICATION_INVOKER_COUNT];

static void ExecuteEntry(int32_t type)
{
    for (const WtApplication_EntryType *e = (&mApp_Entry_0_NULL) + 1; e < &mApp_Entry_9_NULL; e++)
    {
        if (e->Type & type)
        {
            e->Entry();
        }
    }
}

void WtApplication_Sleep(void)
{
    ExecuteEntry(WT_APPLICATION_ENTRY_TYPE_SLEEP);
}

void WtApplication_Wakeup(void)
{
    ExecuteEntry(WT_APPLICATION_ENTRY_TYPE_WAKEUP);
}

int main(void)
{
    rt_mb_init(&mInvoker, "invoker", mPool, sizeof(mPool), RT_IPC_FLAG_FIFO);
    ExecuteEntry(WT_APPLICATION_ENTRY_TYPE_INITIALIZE);
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
WT_APPLICATION_REGISTER_COMMAND(NULL, "a", 10);
WT_APPLICATION_REGISTER_COMMAND(NULL, "a", 20);
WT_APPLICATION_REGISTER_COMMAND(NULL, "", 30);
WT_APPLICATION_REGISTER_COMMAND(NULL, "", 40);
WT_APPLICATION_REGISTER_COMMAND(NULL, "", 50);
WT_APPLICATION_REGISTER_COMMAND(NULL, "", 60);
WT_APPLICATION_REGISTER_COMMAND(NULL, "", 70);
WT_APPLICATION_REGISTER_COMMAND(NULL, "", 80);
WT_APPLICATION_REGISTER_COMMAND(NULL, "", 90);

const WtApplication_CommandType *WtApplication_GetCommand(const char *name, uint8_t group)
{
    const WtApplication_CommandType *b = NULL, *e = NULL, *r = NULL;
    if (group == 1)
    {
        b = &mApp_Command_10_NULL;
        e = &mApp_Command_20_NULL;
    }
    else if (group == 2)
    {
        b = &mApp_Command_20_NULL;
        e = &mApp_Command_30_NULL;
    }
    else if (group == 3)
    {
        b = &mApp_Command_30_NULL;
        e = &mApp_Command_40_NULL;
    }
    else if (group == 4)
    {
        b = &mApp_Command_40_NULL;
        e = &mApp_Command_50_NULL;
    }
    else if (group == 5)
    {
        b = &mApp_Command_50_NULL;
        e = &mApp_Command_60_NULL;
    }
    else if (group == 6)
    {
        b = &mApp_Command_60_NULL;
        e = &mApp_Command_70_NULL;
    }
    else if (group == 7)
    {
        b = &mApp_Command_70_NULL;
        e = &mApp_Command_80_NULL;
    }
    else if (group == 8)
    {
        b = &mApp_Command_80_NULL;
        e = &mApp_Command_90_NULL;
    }
    for (b++; b < e; b++)
    {
        if (strcmp(b->Name, name) == 0)
        {
            r = b;
            break;
        }
    }
    return r;
}

bool WtApplication_Invoke(const WtActionType action)
{
    bool r = false;
    if (action)
    {
        r = rt_mb_send(&mInvoker, (rt_ubase_t)action) == RT_EOK;
    }
    return r;
}