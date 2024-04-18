#ifndef __WT_ENTRY_H_
#define __WT_ENTRY_H_

typedef enum
{
    WT_ENTRY_GROUP_STARTUP,
    WT_ENTRY_GROUP_SLEEP,
    WT_ENTRY_GROUP_WAKEUP,
} WtEntry_GroupType;

typedef struct
{
    void (*Action)(void *parameter);
    WtEntry_GroupType Group;
} WtEntry_Type;

#define WT_ENTRY_REGISTER1(action, group) const static WtEntry_Type mWtEntry1_##action __attribute__((used, __section__(".WtEntry.1"))) = {action, group}
#define WT_ENTRY_REGISTER2(action, group) const static WtEntry_Type mWtEntry2_##action __attribute__((used, __section__(".WtEntry.2"))) = {action, group}
#define WT_ENTRY_REGISTER3(action, group) const static WtEntry_Type mWtEntry3_##action __attribute__((used, __section__(".WtEntry.3"))) = {action, group}
#define WT_ENTRY_REGISTER4(action, group) const static WtEntry_Type mWtEntry4_##action __attribute__((used, __section__(".WtEntry.4"))) = {action, group}
#define WT_ENTRY_REGISTER5(action, group) const static WtEntry_Type mWtEntry5_##action __attribute__((used, __section__(".WtEntry.5"))) = {action, group}
#define WT_ENTRY_REGISTER6(action, group) const static WtEntry_Type mWtEntry6_##action __attribute__((used, __section__(".WtEntry.6"))) = {action, group}
#define WT_ENTRY_REGISTER7(action, group) const static WtEntry_Type mWtEntry7_##action __attribute__((used, __section__(".WtEntry.7"))) = {action, group}
#define WT_ENTRY_REGISTER8(action, group) const static WtEntry_Type mWtEntry8_##action __attribute__((used, __section__(".WtEntry.8"))) = {action, group}

int WtEntry_Execute(WtEntry_GroupType group, void *parameter);
#endif
