#include <string.h>
#include <WtCommand.h>

const static WtCommand_Type mWtCommand0 __attribute__((used, __section__(".WtCommand.0")));
const static WtCommand_Type mWtCommand9 __attribute__((used, __section__(".WtCommand.9")));

int WtCommand_Execute(const char *name, int sender, void *parameter)
{
    int cnt = 0;
    for (const WtCommand_Type *b = &mWtCommand0 + 1; b < &mWtCommand9; b++)
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
