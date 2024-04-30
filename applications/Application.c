#include <stdio.h>
#include "WtEntry.h"
#include "WtCommand.h"
#include "WtVersion.h"
#include "Application.h"
void Startup1(void *parameter)
{
}
WT_ENTRY_REGISTER1(WT_ENTRY_GROUP_STARTUP, Startup1);

void Startup2(void *parameter)
{
}
WT_ENTRY_REGISTER2(WT_ENTRY_GROUP_STARTUP, Startup2);

void Startup3(void *parameter)
{
}
WT_ENTRY_REGISTER3(WT_ENTRY_GROUP_STARTUP, Startup3);

void Startup4(void *parameter)
{
}
WT_ENTRY_REGISTER4(WT_ENTRY_GROUP_STARTUP, Startup4);

void Startup5(void *parameter)
{
}
WT_ENTRY_REGISTER5(WT_ENTRY_GROUP_STARTUP, Startup5);

void Startup6(void *parameter)
{
}
WT_ENTRY_REGISTER6(WT_ENTRY_GROUP_STARTUP, Startup6);

void Startup7(void *parameter)
{
}
WT_ENTRY_REGISTER7(WT_ENTRY_GROUP_STARTUP, Startup7);

void Startup8(void *parameter)
{
}
WT_ENTRY_REGISTER8(WT_ENTRY_GROUP_STARTUP, Startup8);

void Command1(WtEntry_SourceType sender, void *parameter)
{
    switch (sender  )
    {
    case  WT_COMMAND_SOURCE_CON:
        // do something for console command
        break;
    case  WT_COMMAND_SOURCE_GSM:
        // do something for GSM command
        break;
    default:
        break;
    }
}
WT_COMMAND_REGISTER1("cmd1", Command1);

void Command11(WtEntry_SourceType sender, void *parameter)
{
}
WT_COMMAND_REGISTER1("cmd1", Command11);
void Command2(WtEntry_SourceType sender, void *parameter)
{
}
WT_COMMAND_REGISTER2("cmd2", Command2);

void Command3(WtEntry_SourceType sender, void *parameter)
{
}
WT_COMMAND_REGISTER3("cmd3", Command3);

void Command4(WtEntry_SourceType sender, void *parameter)
{
}
WT_COMMAND_REGISTER4("cmd4", Command4);

void Command5(WtEntry_SourceType sender, void *parameter)
{
}
WT_COMMAND_REGISTER5("cmd5", Command5);

void Command6(WtEntry_SourceType sender, void *parameter)
{
}
WT_COMMAND_REGISTER6("cmd6", Command6);

void Command7(WtEntry_SourceType sender, void *parameter)
{
}
WT_COMMAND_REGISTER7("cmd7", Command7);

void Command8(WtEntry_SourceType sender, void *parameter)
{
}
WT_COMMAND_REGISTER8("cmd8", Command8);

int main(void)
{
    WtEntry_Execute(WT_ENTRY_GROUP_STARTUP, 0);

    WtCommand_Execute(WT_COMMAND_GROUP_1, "cmd1", WT_COMMAND_SOURCE_CON, 0);
    WtCommand_Execute(WT_COMMAND_GROUP_2, "cmd2", WT_COMMAND_SOURCE_CON, 0);
    WtCommand_Execute(WT_COMMAND_GROUP_3, "cmd3", WT_COMMAND_SOURCE_CON, 0);
    WtCommand_Execute(WT_COMMAND_GROUP_4, "cmd4", WT_COMMAND_SOURCE_CON, 0);
    WtCommand_Execute(WT_COMMAND_GROUP_5, "cmd5", WT_COMMAND_SOURCE_CON, 0);
    WtCommand_Execute(WT_COMMAND_GROUP_6, "cmd6", WT_COMMAND_SOURCE_CON, 0);
    WtCommand_Execute(WT_COMMAND_GROUP_7, "cmd7", WT_COMMAND_SOURCE_CON, 0);
    WtCommand_Execute(WT_COMMAND_GROUP_8, "cmd8", WT_COMMAND_SOURCE_CON, 0);

    printf("%u,%s,%s\n", WT_VERSION_NUMBER, WT_VERSION_TINY, WT_VERSION_FULL);
}