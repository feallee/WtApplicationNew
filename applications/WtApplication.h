/**
 * @brief 提供接口以管理应用程序，例如启动应用程序、处理委托动作和管理命令等功能。
 * @copyright Copyright(C) 2023 We as Top team. All rights reserved.
 * @section 修订日志
 * 日期         作者                内容
 * -------------------------------------------------------------------------
 * 2024/03/29   feallee@hotmail.com 增加入口函数类别，增加 Sleep 和 Wakeup 接口。
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
    const WtActionType Entry;
    /// @brief 入口类别。
    int32_t Type;
} WtApplication_EntryType;
/// @brief 向应用程序注册自动执行入口函数。
/// @param entry 入口函数。不允许为 NULL。
/// @param level 执行优先级别。共 8 个级别，执行顺序：1->2->3->4->5->6->7->8。
#define WT_APPLICATION_REGISTER_ENTRY(entry, type, level) const static WtApplication_EntryType mApp_Entry_##level##_##entry __attribute__((used, __section__(".app_entry." #level))) = {entry, type}
/// @brief 向应用程序注册优先级别为 1 的自动执行入口函数。
/// @param entry 入口函数。不允许为 NULL。
#define WT_APPLICATION_REGISTER_ENTRY1(entry, type) WT_APPLICATION_REGISTER_ENTRY(entry, type, 1)
/// @brief 向应用程序注册优先级别为 2 的自动执行入口函数。
/// @param entry 入口函数。不允许为 NULL。
#define WT_APPLICATION_REGISTER_ENTRY2(entry, type) WT_APPLICATION_REGISTER_ENTRY(entry, type, 2)
/// @brief 向应用程序注册优先级别为 3 的自动执行入口函数。
/// @param entry 入口函数。不允许为 NULL。
#define WT_APPLICATION_REGISTER_ENTRY3(entry, type) WT_APPLICATION_REGISTER_ENTRY(entry, type, 3)
/// @brief 向应用程序注册优先级别为 4 的自动执行入口函数。
/// @param entry 入口函数。不允许为 NULL。
#define WT_APPLICATION_REGISTER_ENTRY4(entry, type) WT_APPLICATION_REGISTER_ENTRY(entry, type, 4)
/// @brief 向应用程序注册优先级别为 5 的自动执行入口函数。
/// @param entry 入口函数。不允许为 NULL。
#define WT_APPLICATION_REGISTER_ENTRY5(entry, type) WT_APPLICATION_REGISTER_ENTRY(entry, type, 5)
/// @brief 向应用程序注册优先级别为 6 的自动执行入口函数。
/// @param entry 入口函数。不允许为 NULL。
#define WT_APPLICATION_REGISTER_ENTRY6(entry, type) WT_APPLICATION_REGISTER_ENTRY(entry, type, 6)
/// @brief 向应用程序注册优先级别为 7 的自动执行入口函数。
/// @param entry 入口函数。不允许为 NULL。
#define WT_APPLICATION_REGISTER_ENTRY7(entry, type) WT_APPLICATION_REGISTER_ENTRY(entry, type, 7)
/// @brief 向应用程序注册优先级别为 8 的自动执行入口函数。
/// @param entry 入口函数。不允许为 NULL。
#define WT_APPLICATION_REGISTER_ENTRY8(entry, type) WT_APPLICATION_REGISTER_ENTRY(entry, type, 8)
/// @brief 休眠应用程序。
void WtApplication_Sleep(void);
/// @brief 唤醒应用程序。
void WtApplication_Wakeup(void);

/*APP COMMAND*/
/// @brief 应用程序命令控制块类型。
typedef struct
{
    /// @brief 命令函数。
    const WtCommandType Command;
    /// @brief 命令名称。
    const char *Name;
} WtApplication_CommandType;
/// @brief 向应用程序注册命令函数。
/// @param name 命令名称。不允许为 NULL且不允许重复。
/// @param command 命令函数。不允许为 NULL。
/// @param group 命令分组。共 8 个分组：1,2,3,4,5,6,7,8。
#define WT_APPLICATION_REGISTER_COMMAND(command, name, group) const static WtApplication_CommandType mApp_Command_##group##_##command __attribute__((used, __section__(".app_command." #group))) = {command, name}
/// @brief 向应用程序注册分组为 1 的命令函数。
/// @param name 命令名称。不允许为 NULL且不允许重复。
/// @param command 命令函数。不允许为 NULL。
#define WT_APPLICATION_REGISTER_COMMAND1(command, name) WT_APPLICATION_REGISTER_COMMAND(command, name, 11)
/// @brief 向应用程序注册分组为 2 的命令函数。
/// @param name 命令名称。不允许为 NULL且不允许重复。
/// @param command 命令函数。不允许为 NULL。
#define WT_APPLICATION_REGISTER_COMMAND2(command, name) WT_APPLICATION_REGISTER_COMMAND(command, name, 21)
/// @brief 向应用程序注册分组为 3 的命令函数。
/// @param name 命令名称。不允许为 NULL且不允许重复。
/// @param command 命令函数。不允许为 NULL。
#define WT_APPLICATION_REGISTER_COMMAND3(command, name) WT_APPLICATION_REGISTER_COMMAND(command, name, 31)
/// @brief 向应用程序注册分组为 4 的命令函数。
/// @param name 命令名称。不允许为 NULL且不允许重复。
/// @param command 命令函数。不允许为 NULL。
#define WT_APPLICATION_REGISTER_COMMAND4(command, name) WT_APPLICATION_REGISTER_COMMAND(command, name, 41)
/// @brief 向应用程序注册分组为 5 的命令函数。
/// @param name 命令名称。不允许为 NULL且不允许重复。
/// @param command 命令函数。不允许为 NULL。
#define WT_APPLICATION_REGISTER_COMMAND5(command, name) WT_APPLICATION_REGISTER_COMMAND(command, name, 51)
/// @brief 向应用程序注册分组为 6 的命令函数。
/// @param name 命令名称。不允许为 NULL且不允许重复。
/// @param command 命令函数。不允许为 NULL。
#define WT_APPLICATION_REGISTER_COMMAND6(command, name) WT_APPLICATION_REGISTER_COMMAND(command, name, 61)
/// @brief 向应用程序注册分组为 7 的命令函数。
/// @param name 命令名称。不允许为 NULL且不允许重复。
/// @param command 命令函数。不允许为 NULL。
#define WT_APPLICATION_REGISTER_COMMAND7(command, name) WT_APPLICATION_REGISTER_COMMAND(command, name, 71)
/// @brief 向应用程序注册分组为 8 的命令函数。
/// @param name 命令名称。不允许为 NULL且不允许重复。
/// @param command 命令函数。不允许为 NULL。
#define WT_APPLICATION_REGISTER_COMMAND8(command, name) WT_APPLICATION_REGISTER_COMMAND(command, name, 81)
/// @brief 获取应用程序命令。
/// @param group 分组。
/// @param name 命令名称。不允许为 NULL。
/// @return 返回应用程序命令。如果没有匹配返回 NULL。
const WtApplication_CommandType *WtApplication_GetCommand(const char *name, uint8_t group);

/*APP INVOKER*/
/// @brief 向应用程序委托执行器队列添加动作函数。在当前线程(含中断)不适合处理繁重任务时使用。
/// @param action 动作函数。
/// @return 返回是否成功加入队列。
bool WtApplication_Invoke(const WtActionType action);
#endif