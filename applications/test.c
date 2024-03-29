#include <WtApplication.h>

static void ready(void)
{
    printf("ready!");
    const WtApplication_CommandType *cmd;
    cmd = WtApplication_GetCommand("CMD1", 1);
    if (cmd)
        cmd->Command(0, 0);
    cmd = WtApplication_GetCommand("CMD2", 1);
    if (cmd)
        cmd->Command(0, 0);
    cmd = WtApplication_GetCommand("CMD3", 1);
    if (cmd)
        cmd->Command(0, 0);
    cmd = WtApplication_GetCommand("CMD4", 1);
    if (cmd)
        cmd->Command(0, 0);
    cmd = WtApplication_GetCommand("CMD5", 1);
    if (cmd)
        cmd->Command(0, 0);
    cmd = WtApplication_GetCommand("CMD6", 1);
    if (cmd)
        cmd->Command(0, 0);
    cmd = WtApplication_GetCommand("CMD7", 1);
    if (cmd)
        cmd->Command(0, 0);
    cmd = WtApplication_GetCommand("CMD8", 1);
    if (cmd)
        cmd->Command(0, 0);
}
static void entry1(void)
{
    printf(WT_VERSION_FULL);
}
static void entry2(void)
{
}
static void entry3(void)
{
}
static void entry4(void)
{
}
static void entry5(void)
{
}
static void entry6(void)
{
}
static void entry7(void)
{
}
static void entry8(void)
{
    WtApplication_Invoke(ready);
}
WT_APPLICATION_REGISTER_ENTRY1(entry1, WT_APPLICATION_ENTRY_TYPE_INITIALIZE);
WT_APPLICATION_REGISTER_ENTRY2(entry2, WT_APPLICATION_ENTRY_TYPE_INITIALIZE);
WT_APPLICATION_REGISTER_ENTRY3(entry3, WT_APPLICATION_ENTRY_TYPE_INITIALIZE);
WT_APPLICATION_REGISTER_ENTRY4(entry4, WT_APPLICATION_ENTRY_TYPE_INITIALIZE);
WT_APPLICATION_REGISTER_ENTRY5(entry5, WT_APPLICATION_ENTRY_TYPE_INITIALIZE);
WT_APPLICATION_REGISTER_ENTRY6(entry6, WT_APPLICATION_ENTRY_TYPE_INITIALIZE);
WT_APPLICATION_REGISTER_ENTRY7(entry7, WT_APPLICATION_ENTRY_TYPE_INITIALIZE);
WT_APPLICATION_REGISTER_ENTRY8(entry8, WT_APPLICATION_ENTRY_TYPE_INITIALIZE);

static int cmd1(int sender, void *parameter)
{
    printf(WT_VERSION_TINY);
    return 0;
}
static int cmd2(int sender, void *parameter)
{
    return 0;
}
static int cmd3(int sender, void *parameter)
{
    return 0;
}
static int cmd4(int sender, void *parameter)
{
    return 0;
}
static int cmd5(int sender, void *parameter)
{
    return 0;
}
static int cmd6(int sender, void *parameter)
{
    return 0;
}
static int cmd7(int sender, void *parameter)
{
    return 0;
}
static int cmd8(int sender, void *parameter)
{
    return 0;
}
WT_APPLICATION_REGISTER_COMMAND1(cmd1, "CMD1");
WT_APPLICATION_REGISTER_COMMAND1(cmd2, "CMD2");
WT_APPLICATION_REGISTER_COMMAND1(cmd3, "CMD3");
WT_APPLICATION_REGISTER_COMMAND1(cmd4, "CMD4");
WT_APPLICATION_REGISTER_COMMAND1(cmd5, "CMD5");
WT_APPLICATION_REGISTER_COMMAND1(cmd6, "CMD6");
WT_APPLICATION_REGISTER_COMMAND1(cmd7, "CMD7");
WT_APPLICATION_REGISTER_COMMAND1(cmd8, "CMD8");