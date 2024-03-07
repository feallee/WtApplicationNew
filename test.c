#include "application.h"

static void ready(void)
{
    printf("ready!");
    const Application_CommandType *cmd;
    cmd = Application_GetCommand(1, "CMD1");
    if (cmd)
        cmd->Action(0, 0);
    cmd = Application_GetCommand(1, "CMD2");
    if (cmd)
        cmd->Action(0, 0);
    cmd = Application_GetCommand(1, "CMD3");
    if (cmd)
        cmd->Action(0, 0);
    cmd = Application_GetCommand(1, "CMD4");
    if (cmd)
        cmd->Action(0, 0);
    cmd = Application_GetCommand(1, "CMD5");
    if (cmd)
        cmd->Action(0, 0);
    cmd = Application_GetCommand(1, "CMD6");
    if (cmd)
        cmd->Action(0, 0);
    cmd = Application_GetCommand(1, "CMD7");
    if (cmd)
        cmd->Action(0, 0);
    cmd = Application_GetCommand(1, "CMD8");
    if (cmd)
        cmd->Action(0, 0);
}
static void entry1(void)
{
    printf(VERSION_FULL);
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
    Application_Invoke(ready);
}
APPLICATION_REGISTER_ENTRY1(entry1);
APPLICATION_REGISTER_ENTRY2(entry2);
APPLICATION_REGISTER_ENTRY3(entry3);
APPLICATION_REGISTER_ENTRY4(entry4);
APPLICATION_REGISTER_ENTRY5(entry5);
APPLICATION_REGISTER_ENTRY6(entry6);
APPLICATION_REGISTER_ENTRY7(entry7);
APPLICATION_REGISTER_ENTRY8(entry8);

static void cmd1(void *parameter)
{
    printf(VERSION_FULL);
}
static void cmd2(void *parameter)
{
}
static void cmd3(void *parameter)
{
}
static void cmd4(void *parameter)
{
}
static void cmd5(void *parameter)
{
}
static void cmd6(void *parameter)
{
}
static void cmd7(void *parameter)
{
}
static void cmd8(void *parameter)
{
}
APPLICATION_REGISTER_COMMAND1("CMD1", cmd1);
APPLICATION_REGISTER_COMMAND1("CMD2", cmd2);
APPLICATION_REGISTER_COMMAND1("CMD3", cmd3);
APPLICATION_REGISTER_COMMAND1("CMD4", cmd4);
APPLICATION_REGISTER_COMMAND1("CMD5", cmd5);
APPLICATION_REGISTER_COMMAND1("CMD6", cmd6);
APPLICATION_REGISTER_COMMAND1("CMD7", cmd7);
APPLICATION_REGISTER_COMMAND1("CMD8", cmd8);
