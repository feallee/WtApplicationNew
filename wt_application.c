#include "wt_application.h"

static void entry0(void)
{
}
WT_APPLICATION_ENTRY(entry0, "0");
static void entry9(void)
{
}
WT_APPLICATION_ENTRY(entry9, "9");

/*APPLICATION ENTRY*/
static struct rt_mailbox mb;
static char mb_pool[32];
int main(void)
{
    for (const wt_application_entry_type *et = &__wt_app_entry_entry0; et < &__wt_app_entry_entry9; et++)
    {
        et->action();
    }
    rt_mb_init(&mb, "mbt", &mb_pool[0], sizeof(mb_pool) / 4, RT_IPC_FLAG_FIFO);
    while (1)
    {
        void (*act)(void);
        if (rt_mb_recv(&mb, (rt_ubase_t *)&act, RT_WAITING_FOREVER) == RT_EOK)
        {
            act();
        }
    }
}

void wt_application_invoke(void (*action)(void))
{
    if (action)
    {
        rt_mb_send(&mb, (rt_ubase_t)action);
    }
}

/*APPLICATION COMMAND*/
static int command0(void *parameter)
{
    return 0;
}
WT_APPLICATION_COMMAND("", command0, "0");
static int command9(void *parameter)
{
    return 0;
}
WT_APPLICATION_COMMAND("", command9, "9");

static void commanda(char *line)
{
    return 0;
}

bool wt_application_execute(const char *name, char *line)
{
    bool r = false;
    for (const wt_application_command_type *cmd = &__wt_app_command_command0; cmd < &__wt_app_command_command9; cmd++)
    {
        if (strcmp(cmd->name, name) == 0)
        {
            cmd->action(line);
            r = true;
            break;
        }
    }
    return r;
}