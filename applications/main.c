#include <WtDefine.h>

void Startup1(void *parameter)
{
}
WT_ENTRY_REGISTER1(Startup1, WT_ENTRY_GROUP_STARTUP);

void Startup2(void *parameter)
{
}
WT_ENTRY_REGISTER2(Startup2, WT_ENTRY_GROUP_STARTUP);

void Startup3(void *parameter)
{
}
WT_ENTRY_REGISTER3(Startup3, WT_ENTRY_GROUP_STARTUP);

void Startup4(void *parameter)
{
}
WT_ENTRY_REGISTER4(Startup4, WT_ENTRY_GROUP_STARTUP);

void Startup5(void *parameter)
{
}
WT_ENTRY_REGISTER5(Startup5, WT_ENTRY_GROUP_STARTUP);

void Startup6(void *parameter)
{
}
WT_ENTRY_REGISTER6(Startup6, WT_ENTRY_GROUP_STARTUP);

void Startup7(void *parameter)
{
}
WT_ENTRY_REGISTER7(Startup7, WT_ENTRY_GROUP_STARTUP);

void Startup8(void *parameter)
{
}
WT_ENTRY_REGISTER8(Startup8, WT_ENTRY_GROUP_STARTUP);

void Command1(WtEntry_SourceType sender, void *parameter)
{
}
WT_COMMAND_REGISTER1(Command1, "cmd1");

void Command2(WtEntry_SourceType sender, void *parameter)
{
}
WT_COMMAND_REGISTER2(Command2, "cmd2");

void Command3(WtEntry_SourceType sender, void *parameter)
{
}
WT_COMMAND_REGISTER3(Command3, "cmd3");

void Command4(WtEntry_SourceType sender, void *parameter)
{
}
WT_COMMAND_REGISTER4(Command4, "cmd4");

void Command5(WtEntry_SourceType sender, void *parameter)
{
}
WT_COMMAND_REGISTER5(Command5, "cmd5");

void Command6(WtEntry_SourceType sender, void *parameter)
{
}
WT_COMMAND_REGISTER6(Command6, "cmd6");

void Command7(WtEntry_SourceType sender, void *parameter)
{
}
WT_COMMAND_REGISTER7(Command7, "cmd7");

void Command8(WtEntry_SourceType sender, void *parameter)
{
}
WT_COMMAND_REGISTER8(Command8, "cmd8");
int main(void)
{
    WtEntry_Execute(WT_ENTRY_GROUP_STARTUP, 0);

    WtCommand_Execute1("cmd1", WT_COMMAND_SOURCE_CON, 0);
    WtCommand_Execute2("cmd2", WT_COMMAND_SOURCE_CON, 0);
    WtCommand_Execute3("cmd3", WT_COMMAND_SOURCE_CON, 0);
    WtCommand_Execute4("cmd4", WT_COMMAND_SOURCE_CON, 0);
    WtCommand_Execute5("cmd5", WT_COMMAND_SOURCE_CON, 0);
    WtCommand_Execute6("cmd6", WT_COMMAND_SOURCE_CON, 0);
    WtCommand_Execute7("cmd7", WT_COMMAND_SOURCE_CON, 0);
    WtCommand_Execute8("cmd8", WT_COMMAND_SOURCE_CON, 0);

    printf("%u,%s,%s\n", WT_VERSION_NUMBER, WT_VERSION_TINY, WT_VERSION_FULL);
}