#include <string.h>
#include <WtCommand.h>

const static WtCommand_Type mWtCommand0 __attribute__((used, __section__(".WtCommand.09")));
const static WtCommand_Type mWtCommand1 __attribute__((used, __section__(".WtCommand.19")));
const static WtCommand_Type mWtCommand2 __attribute__((used, __section__(".WtCommand.29")));
const static WtCommand_Type mWtCommand3 __attribute__((used, __section__(".WtCommand.39")));
const static WtCommand_Type mWtCommand4 __attribute__((used, __section__(".WtCommand.49")));
const static WtCommand_Type mWtCommand5 __attribute__((used, __section__(".WtCommand.59")));
const static WtCommand_Type mWtCommand6 __attribute__((used, __section__(".WtCommand.69")));
const static WtCommand_Type mWtCommand7 __attribute__((used, __section__(".WtCommand.79")));
const static WtCommand_Type mWtCommand8 __attribute__((used, __section__(".WtCommand.89")));

int WtCommand_Execute1(const char *name, WtEntry_SourceType sender, void *parameter)
{
    int cnt = 0;
    for (const WtCommand_Type *b = &mWtCommand0 + 1; b < &mWtCommand1; b++)
    {
        if (strcmp(name, b->Name) == 0)
        {
            cnt++;
            if (b->Action)
            {
                b->Action(sender, parameter);
            }
        }
    }
    return cnt;
}

int WtCommand_Execute2(const char *name, WtEntry_SourceType sender, void *parameter)
{
    int cnt = 0;
    for (const WtCommand_Type *b = &mWtCommand1 + 1; b < &mWtCommand2; b++)
    {
        if (strcmp(name, b->Name) == 0)
        {
            cnt++;
            if (b->Action)
            {
                b->Action(sender, parameter);
            }
        }
    }
    return cnt;
}

int WtCommand_Execute3(const char *name, WtEntry_SourceType sender, void *parameter)
{
    int cnt = 0;
    for (const WtCommand_Type *b = &mWtCommand2 + 1; b < &mWtCommand3; b++)
    {
        if (strcmp(name, b->Name) == 0)
        {
            cnt++;
            if (b->Action)
            {
                b->Action(sender, parameter);
            }
        }
    }
    return cnt;
}

int WtCommand_Execute4(const char *name, WtEntry_SourceType sender, void *parameter)
{
    int cnt = 0;
    for (const WtCommand_Type *b = &mWtCommand3 + 1; b < &mWtCommand4; b++)
    {
        if (strcmp(name, b->Name) == 0)
        {
            cnt++;
            if (b->Action)
            {
                b->Action(sender, parameter);
            }
        }
    }
    return cnt;
}

int WtCommand_Execute5(const char *name, WtEntry_SourceType sender, void *parameter)
{
    int cnt = 0;
    for (const WtCommand_Type *b = &mWtCommand4 + 1; b < &mWtCommand5; b++)
    {
        if (strcmp(name, b->Name) == 0)
        {
            cnt++;
            if (b->Action)
            {
                b->Action(sender, parameter);
            }
        }
    }
    return cnt;
}

int WtCommand_Execute6(const char *name, WtEntry_SourceType sender, void *parameter)
{
    int cnt = 0;
    for (const WtCommand_Type *b = &mWtCommand5 + 1; b < &mWtCommand6; b++)
    {
        if (strcmp(name, b->Name) == 0)
        {
            cnt++;
            if (b->Action)
            {
                b->Action(sender, parameter);
            }
        }
    }
    return cnt;
}

int WtCommand_Execute7(const char *name, WtEntry_SourceType sender, void *parameter)
{
    int cnt = 0;
    for (const WtCommand_Type *b = &mWtCommand6 + 1; b < &mWtCommand7; b++)
    {
        if (strcmp(name, b->Name) == 0)
        {
            cnt++;
            if (b->Action)
            {
                b->Action(sender, parameter);
            }
        }
    }
    return cnt;
}

int WtCommand_Execute8(const char *name, WtEntry_SourceType sender, void *parameter)
{
    int cnt = 0;
    for (const WtCommand_Type *b = &mWtCommand7 + 1; b < &mWtCommand8; b++)
    {
        if (strcmp(name, b->Name) == 0)
        {
            cnt++;
            if (b->Action)
            {
                b->Action(sender, parameter);
            }
        }
    }
    return cnt;
}