/**
 * @brief 应用程序入口管理模块。执行优先级为: 1->2->3->4->5->6->7->8。
 * @copyright Copyright(C) 2023 We As Top team. All rights reserved.
 * @section 修订日志
 * 日期         作者                内容
 * -------------------------------------------------------------------------
 * 2024/4/26   feallee@hotmail.com 初版。
 */
#ifndef __WT_ENTRY_H_
#define __WT_ENTRY_H_

/// @brief 应用程序入口组别类型。
typedef enum
{
    /// @brief 启动组。
    WT_ENTRY_GROUP_STARTUP,
    /// @brief 休眠组。
    WT_ENTRY_GROUP_SLEEP,
    /// @brief 唤醒组。
    WT_ENTRY_GROUP_WAKEUP,
    /// @brief 退出组。
    WT_ENTRY_GROUP_EXIT,
    /// @brief 异常组。
    WT_ENTRY_GROUP_EXCEPTION,
    /// TODO 在这里定义其它入口组别。前面的组别也可以删除。
} WtEntry_GroupType;

/// @brief 应用程序入口控制块类型
typedef struct
{
    /// @brief 入口动作。
    void (*Action)(void *parameter);
    /// @brief 入口组别。
    WtEntry_GroupType Group;
} WtEntry_Type;

/// @brief 注册应用程序入口(优先级 1)。
/// @param action 入口动作。
/// @param group 入口组别。
#define WT_ENTRY_REGISTER1(group, action) const static WtEntry_Type mWtEntry1_##action __attribute__((used, __section__(".WtEntry.1"))) = {action, group}

/// @brief 注册应用程序入口(优先级 2)。
/// @param action 入口动作。
/// @param group 入口组别。
#define WT_ENTRY_REGISTER2(group, action) const static WtEntry_Type mWtEntry2_##action __attribute__((used, __section__(".WtEntry.2"))) = {action, group}

/// @brief 注册应用程序入口(优先级 3)。
/// @param action 入口动作。
/// @param group 入口组别。
#define WT_ENTRY_REGISTER3(group, action) const static WtEntry_Type mWtEntry3_##action __attribute__((used, __section__(".WtEntry.3"))) = {action, group}

/// @brief 注册应用程序入口(优先级 4)。
/// @param action 入口动作。
/// @param group 入口组别。
#define WT_ENTRY_REGISTER4(group, action) const static WtEntry_Type mWtEntry4_##action __attribute__((used, __section__(".WtEntry.4"))) = {action, group}

/// @brief 注册应用程序入口(优先级 5)。
/// @param action 入口动作。
/// @param group 入口组别。
#define WT_ENTRY_REGISTER5(group, action) const static WtEntry_Type mWtEntry5_##action __attribute__((used, __section__(".WtEntry.5"))) = {action, group}

/// @brief 注册应用程序入口(优先级 6)。
/// @param action 入口动作。
/// @param group 入口组别。
#define WT_ENTRY_REGISTER6(group, action) const static WtEntry_Type mWtEntry6_##action __attribute__((used, __section__(".WtEntry.6"))) = {action, group}

/// @brief 注册应用程序入口(优先级 7)。
/// @param action 入口动作。
/// @param group 入口组别。
#define WT_ENTRY_REGISTER7(group, action) const static WtEntry_Type mWtEntry7_##action __attribute__((used, __section__(".WtEntry.7"))) = {action, group}

/// @brief 注册应用程序入口(优先级 8)。
/// @param action 入口动作。
/// @param group 入口组别。
#define WT_ENTRY_REGISTER8(group, action) const static WtEntry_Type mWtEntry8_##action __attribute__((used, __section__(".WtEntry.8"))) = {action, group}

/// @brief 执行应用程序入口。
/// @param group 入口组别。
/// @param parameter 入口参数。
/// @return 返回执行指定组别的应用程序入口数量。如果没有找到入口返回 0。
extern int WtEntry_Execute(WtEntry_GroupType group, void *parameter);
#endif
