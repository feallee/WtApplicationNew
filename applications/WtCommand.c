#include <string.h>
#include "WtCommand.h"

const static WtCommand_Type mWtCommand1 __attribute__((used, __section__(".WtCommand.10")));
const static WtCommand_Type mWtCommand2 __attribute__((used, __section__(".WtCommand.20")));
const static WtCommand_Type mWtCommand3 __attribute__((used, __section__(".WtCommand.30")));
const static WtCommand_Type mWtCommand4 __attribute__((used, __section__(".WtCommand.40")));
const static WtCommand_Type mWtCommand5 __attribute__((used, __section__(".WtCommand.50")));
const static WtCommand_Type mWtCommand6 __attribute__((used, __section__(".WtCommand.60")));
const static WtCommand_Type mWtCommand7 __attribute__((used, __section__(".WtCommand.70")));
const static WtCommand_Type mWtCommand8 __attribute__((used, __section__(".WtCommand.80")));
const static WtCommand_Type mWtCommand9 __attribute__((used, __section__(".WtCommand.90")));

int WtCommand_Execute(WtCommand_GroupType group, const char *name, WtEntry_SourceType sender, void *parameter)
{
    int cnt = 0;
    const WtCommand_Type *b;
    const WtCommand_Type *e;
    switch (group)
    {
    case WT_COMMAND_GROUP_1:
    {
        b = &mWtCommand1 + 1;
        e = &mWtCommand2;
    }
    break;
    case WT_COMMAND_GROUP_2:
    {
        b = &mWtCommand2 + 1;
        e = &mWtCommand3;
    }
    break;
    case WT_COMMAND_GROUP_3:
    {
        b = &mWtCommand3 + 1;
        e = &mWtCommand4;
    }
    break;
    case WT_COMMAND_GROUP_4:
    {
        b = &mWtCommand4 + 1;
        e = &mWtCommand5;
    }
    break;
    case WT_COMMAND_GROUP_5:
    {
        b = &mWtCommand5 + 1;
        e = &mWtCommand6;
    }
    break;
    case WT_COMMAND_GROUP_6:
    {
        b = &mWtCommand6 + 1;
        e = &mWtCommand7;
    }
    break;
    case WT_COMMAND_GROUP_7:
    {
        b = &mWtCommand7 + 1;
        e = &mWtCommand8;
    }
    break;
    case WT_COMMAND_GROUP_8:
    {
        b = &mWtCommand8 + 1;
        e = &mWtCommand9;
    }
    break;
    default:
    {
        b = e = NULL;
    }
    break;
    }
    while (b < e)
    {
        if (name)
        {
            if (b->Name)
            {
                if (strcmp(name, b->Name) == 0)
                {
                    if (b->Action)
                    {
                        b->Action(sender, parameter);
                        cnt++;
                    }
                }
            }
        }
        else
        {
            if (b->Name == NULL)
            {
                if (b->Action)
                {
                    b->Action(sender, parameter);
                    cnt++;
                }
            }
        }
        b++;
    }
    return cnt;
}
