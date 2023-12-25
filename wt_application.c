#include "wt_application.h"

static void entry0(void)
{
}
__WT_APPLICATION_ENTRY(entry0, "0");
static void entry9(void)
{
}
__WT_APPLICATION_ENTRY(entry9, "9");

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
static void command0e(char *line)
{
}
__WT_APPLICATION_COMMAND("", command0e, "0.e");
static void command1e(char *line)
{
}
__WT_APPLICATION_COMMAND("", command1e, "1.e");
static void command2e(char *line)
{
}
__WT_APPLICATION_COMMAND("", command2e, "2.e");
static void command3e(char *line)
{
}
__WT_APPLICATION_COMMAND("", command3e, "3.e");
static void command4e(char *line)
{
}
__WT_APPLICATION_COMMAND("", command4e, "4.e");
static void command5e(char *line)
{
}
__WT_APPLICATION_COMMAND("", command5e, "5.e");
static void command6e(char *line)
{
}
__WT_APPLICATION_COMMAND("", command6e, "6.e");
static void command7e(char *line)
{
}
__WT_APPLICATION_COMMAND("", command7e, "7.e");
static void command8e(char *line)
{
}
__WT_APPLICATION_COMMAND("", command8e, "8.e");

bool wt_application_execute(uint8_t level, const char *name, char *line)
{
    bool r = false;
    const wt_application_command_type *b, *e;
    if (level == 1)
    {
        b = &__wt_app_command_command0e;
        e = &__wt_app_command_command1e;
    }
    else if (level == 2)
    {
        b = &__wt_app_command_command1e;
        e = &__wt_app_command_command2e;
    }
    else if (level == 3)
    {
        b = &__wt_app_command_command2e;
        e = &__wt_app_command_command3e;
    }
    else if (level == 4)
    {
        b = &__wt_app_command_command3e;
        e = &__wt_app_command_command4e;
    }
    else if (level == 5)
    {
        b = &__wt_app_command_command4e;
        e = &__wt_app_command_command5e;
    }
    else if (level == 6)
    {
        b = &__wt_app_command_command5e;
        e = &__wt_app_command_command6e;
    }
    else if (level == 7)
    {
        b = &__wt_app_command_command6e;
        e = &__wt_app_command_command7e;
    }
    else if (level == 8)
    {
        b = &__wt_app_command_command7e;
        e = &__wt_app_command_command8e;
    }
    else
    {
        b = &__wt_app_command_command0e;
        e = &__wt_app_command_command8e;
    }
    for (const wt_application_command_type *cmd = b; cmd < e; cmd++)
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
