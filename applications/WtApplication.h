/**
 * @brief 提供接口以管理应用程序，例如启动应用程序、处理委托动作和管理命令等功能。
 * @copyright Copyright(C) 2023 We as Top team. All rights reserved.
 * @section 修订日志
 * 日期         作者                内容
 * -------------------------------------------------------------------------
 * 2023/11/30   feallee@hotmail.com 初版。
 */

#ifndef __WT_APPLICATION_H_
#define __WT_APPLICATION_H_
#include <WtDefine.h>
/*APP ENTRY*/
/// @brief 应用程序入口控制块类型。
typedef struct
{
    /// @brief 入口函数。
    WtActionType Entry;
} WtApplication_EntryType;
/// @brief 向应用程序注册自动执行入口函数。
/// @param entry 入口函数。不允许为 NULL。
/// @param level 执行优先级别。共 8 个级别，执行顺序：1->2->3->4->5->6->7->8。
#define WT_APPLICATION_REGISTER_ENTRY(entry, level) const static WtApplication_EntryType mApp_Entry_##entry##_##level __attribute__((used, __section__(".app_entry." #level))) = {entry}
/// @brief 向应用程序注册优先级别为 1 的自动执行入口函数。
/// @param entry 入口函数。不允许为 NULL。
#define WT_APPLICATION_REGISTER_ENTRY1(entry) WT_APPLICATION_REGISTER_ENTRY(entry, 1)
/// @brief 向应用程序注册优先级别为 2 的自动执行入口函数。
/// @param entry 入口函数。不允许为 NULL。
#define WT_APPLICATION_REGISTER_ENTRY2(entry) WT_APPLICATION_REGISTER_ENTRY(entry, 2)
/// @brief 向应用程序注册优先级别为 3 的自动执行入口函数。
/// @param entry 入口函数。不允许为 NULL。
#define WT_APPLICATION_REGISTER_ENTRY3(entry) WT_APPLICATION_REGISTER_ENTRY(entry, 3)
/// @brief 向应用程序注册优先级别为 4 的自动执行入口函数。
/// @param entry 入口函数。不允许为 NULL。
#define WT_APPLICATION_REGISTER_ENTRY4(entry) WT_APPLICATION_REGISTER_ENTRY(entry, 4)
/// @brief 向应用程序注册优先级别为 5 的自动执行入口函数。
/// @param entry 入口函数。不允许为 NULL。
#define WT_APPLICATION_REGISTER_ENTRY5(entry) WT_APPLICATION_REGISTER_ENTRY(entry, 5)
/// @brief 向应用程序注册优先级别为 6 的自动执行入口函数。
/// @param entry 入口函数。不允许为 NULL。
#define WT_APPLICATION_REGISTER_ENTRY6(entry) WT_APPLICATION_REGISTER_ENTRY(entry, 6)
/// @brief 向应用程序注册优先级别为 7 的自动执行入口函数。
/// @param entry 入口函数。不允许为 NULL。
#define WT_APPLICATION_REGISTER_ENTRY7(entry) WT_APPLICATION_REGISTER_ENTRY(entry, 7)
/// @brief 向应用程序注册优先级别为 8 的自动执行入口函数。
/// @param entry 入口函数。不允许为 NULL。
#define WT_APPLICATION_REGISTER_ENTRY8(entry) WT_APPLICATION_REGISTER_ENTRY(entry, 8)

/*APP COMMAND*/
/// @brief 应用程序命令控制块类型。
typedef struct
{
    /// @brief 命令名称。
    const char *Name;
    /// @brief 命令函数。
    const WtCommandType Command;
} WtApplication_CommandType;
/// @brief 向应用程序注册命令函数。
/// @param name 命令名称。不允许为 NULL且不允许重复。
/// @param command 命令函数。不允许为 NULL。
/// @param group 命令分组。共 8 个分组：1,2,3,4,5,6,7,8。
#define WT_APPLICATION_REGISTER_COMMAND(name, command, group) const static WtApplication_CommandType mApp_Command_##command##_##group __attribute__((used, __section__(".app_command." #group))) = {name, command}
/// @brief 向应用程序注册分组为 1 的命令函数。
/// @param name 命令名称。不允许为 NULL且不允许重复。
/// @param command 命令函数。不允许为 NULL。
#define WT_APPLICATION_REGISTER_COMMAND1(name, command) WT_APPLICATION_REGISTER_COMMAND(name, command, 11)
/// @brief 向应用程序注册分组为 2 的命令函数。
/// @param name 命令名称。不允许为 NULL且不允许重复。
/// @param command 命令函数。不允许为 NULL。
#define WT_APPLICATION_REGISTER_COMMAND2(name, command) WT_APPLICATION_REGISTER_COMMAND(name, command, 21)
/// @brief 向应用程序注册分组为 3 的命令函数。
/// @param name 命令名称。不允许为 NULL且不允许重复。
/// @param command 命令函数。不允许为 NULL。
#define WT_APPLICATION_REGISTER_COMMAND3(name, command) WT_APPLICATION_REGISTER_COMMAND(name, command, 31)
/// @brief 向应用程序注册分组为 4 的命令函数。
/// @param name 命令名称。不允许为 NULL且不允许重复。
/// @param command 命令函数。不允许为 NULL。
#define WT_APPLICATION_REGISTER_COMMAND4(name, command) WT_APPLICATION_REGISTER_COMMAND(name, command, 41)
/// @brief 向应用程序注册分组为 5 的命令函数。
/// @param name 命令名称。不允许为 NULL且不允许重复。
/// @param command 命令函数。不允许为 NULL。
#define WT_APPLICATION_REGISTER_COMMAND5(name, command) WT_APPLICATION_REGISTER_COMMAND(name, command, 51)
/// @brief 向应用程序注册分组为 6 的命令函数。
/// @param name 命令名称。不允许为 NULL且不允许重复。
/// @param command 命令函数。不允许为 NULL。
#define WT_APPLICATION_REGISTER_COMMAND6(name, command) WT_APPLICATION_REGISTER_COMMAND(name, command, 61)
/// @brief 向应用程序注册分组为 7 的命令函数。
/// @param name 命令名称。不允许为 NULL且不允许重复。
/// @param command 命令函数。不允许为 NULL。
#define WT_APPLICATION_REGISTER_COMMAND7(name, command) WT_APPLICATION_REGISTER_COMMAND(name, command, 71)
/// @brief 向应用程序注册分组为 8 的命令函数。
/// @param name 命令名称。不允许为 NULL且不允许重复。
/// @param command 命令函数。不允许为 NULL。
#define WT_APPLICATION_REGISTER_COMMAND8(name, command) WT_APPLICATION_REGISTER_COMMAND(name, command, 81)
/// @brief 获取应用程序命令。
/// @param group 分组。
/// @param name 命令名称。不允许为 NULL。
/// @return 返回应用程序命令。如果没有匹配返回 NULL。
const WtApplication_CommandType *WtApplication_GetCommand(const char *name, uint8_t group);

/*APP INVOKER*/
/// @brief 向应用程序委托执行器队列添加动作函数。在当前线程(含中断)不适合处理繁重任务时使用。
/// @param action 动作函数。
/// @return 返回是否成功加入队列。
bool WtApplication_Invoke(WtActionType action);
#endif