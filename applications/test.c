#include <WtApplication.h>

static void ready(void)
{
    printf("ready!");
    WtApplication_Execute("CMD1", 1, 0, 0);
    WtApplication_Execute("CMD2", 1, 0, 0);
    WtApplication_Execute("CMD3", 1, 0, 0);
    WtApplication_Execute("CMD4", 1, 0, 0);
    WtApplication_Execute("CMD5", 1, 0, 0);
    WtApplication_Execute("CMD6", 1, 0, 0);
    WtApplication_Execute("CMD7", 1, 0, 0);
    WtApplication_Execute("CMD8", 1, 0, 0);
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

static int cmd1(uint32_t sender, void *parameter)
{
    printf(WT_VERSION_TINY);
    return 0;
}
static int cmd2(uint32_t sender, void *parameter)
{
    return 0;
}
static int cmd3(uint32_t sender, void *parameter)
{
    return 0;
}
static int cmd4(uint32_t sender, void *parameter)
{
    return 0;
}
static int cmd5(uint32_t sender, void *parameter)
{
    return 0;
}
static int cmd6(uint32_t sender, void *parameter)
{
    return 0;
}
static int cmd7(uint32_t sender, void *parameter)
{
    return 0;
}
static int cmd8(uint32_t sender, void *parameter)
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

void CPU_Sleep(void)
{
}