#include <WtEntry.h>

const static WtEntry_Type mWtEntry0 __attribute__((used, __section__(".WtEntry.0")));
const static WtEntry_Type mWtEntry9 __attribute__((used, __section__(".WtEntry.9")));

int WtEntry_Execute(WtEntry_GroupType group, void *parameter)
{
    int cnt = 0;
    for (const WtEntry_Type *b = &mWtEntry0 + 1; b < &mWtEntry9; b++)
    {
        if (b->Group == group)
        {
            cnt++;
            if (b->Action)
            {
                b->Action(parameter);
            }
        }
    }
    return cnt;
}
