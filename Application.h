/**
 * @brief 提供接口以管理应用程序，例如启动应用程序、处理委托动作和管理命令等功能。
 * @copyright Copyright(C) 2023 We as Top team. All rights reserved.
 * @section 修订日志
 * 日期         作者                内容
 * -------------------------------------------------------------------------
 * 2023/11/30   feallee@hotmail.com 初版。
 */

#ifndef __APPLICATION_H_
#define __APPLICATION_H_
#include "config.h"
/*APP ENTRY*/
/// @brief 应用程序入口类型。
typedef struct
{
    /// @brief 入口函数。
    ActionType Action;
} Application_EntryType;
/// @brief 向应用程序注册自动执行入口函数。
/// @param action 入口函数。
/// @param level 执行优先级别。共 8 个级别，执行顺序：1->2->3->4->5->6->7->8。
#define APPLICATION_REGISTER_ENTRY(action, level) const static Application_EntryType mApplication_Entry_##action __attribute__((used, __section__(".application_entry." level))) = {action}
/// @brief 向应用程序注册优先级别为 1 的自动执行入口函数。
/// @param action 入口函数。
#define APPLICATION_REGISTER_ENTRY1(action) APPLICATION_REGISTER_ENTRY(action, "1")
/// @brief 向应用程序注册优先级别为 2 的自动执行入口函数。
/// @param action 入口函数。
#define APPLICATION_REGISTER_ENTRY2(action) APPLICATION_REGISTER_ENTRY(action, "2")
/// @brief 向应用程序注册优先级别为 3 的自动执行入口函数。
/// @param action 入口函数。
#define APPLICATION_REGISTER_ENTRY3(action) APPLICATION_REGISTER_ENTRY(action, "3")
/// @brief 向应用程序注册优先级别为 4 的自动执行入口函数。
/// @param action 入口函数。
#define APPLICATION_REGISTER_ENTRY4(action) APPLICATION_REGISTER_ENTRY(action, "4")
/// @brief 向应用程序注册优先级别为 5 的自动执行入口函数。
/// @param action 入口函数。
#define WAPPLICATION_REGISTER_ENTRY5(action) APPLICATION_REGISTER_ENTRY(action, "5")
/// @brief 向应用程序注册优先级别为 6 的自动执行入口函数。
/// @param action 入口函数。
#define APPLICATION_REGISTER_ENTRY6(action) APPLICATION_REGISTER_ENTRY(action, "6")
/// @brief 向应用程序注册优先级别为 7 的自动执行入口函数。
/// @param action 入口函数。
#define APPLICATION_REGISTER_ENTRY7(action) APPLICATION_REGISTER_ENTRY(action, "7")
/// @brief 向应用程序注册优先级别为 8 的自动执行入口函数。
/// @param action 入口函数。
#define APPLICATION_REGISTER_ENTRY8(action) APPLICATION_REGISTER_ENTRY(action, "8")

/*APP COMMAND*/
/// @brief 应用命令类型。
typedef struct
{
    /// @brief 命令名称。
    char *Name;
    /// @brief 命令函数。
    Action1Type Action;
} Application_CommandType;
/// @brief 向应用程序注册命令函数。
/// @param name 命令名称。
/// @param action 命令函数。
/// @param level 命令级别。共 8 个级别：1,2,3,4,5,6,7,8。
#define APPLICATION_REGISTER_COMMAND(name, action, level) const static Application_CommandType mApplication_Command_##action __attribute__((used, __section__(".application_command." level))) = {name, action}
/// @brief 向应用程序注册级别为 1 的命令函数。
/// @param name 命令名称。
/// @param action 命令函数。
#define APPLICATION_REGISTER_COMMAND1(name, action) APPLICATION_REGISTER_COMMAND(name, action, "1")
/// @brief 向应用程序注册级别为 2 的命令函数。
/// @param name 命令名称。
/// @param action 命令函数。
#define APPLICATION_REGISTER_COMMAND2(name, action) APPLICATION_REGISTER_COMMAND(name, action, "2")
/// @brief 向应用程序注册级别为 3 的命令函数。
/// @param name 命令名称。
/// @param action 命令函数。
#define APPLICATION_REGISTER_COMMAND3(name, action) APPLICATION_REGISTER_COMMAND(name, action, "3")
/// @brief 向应用程序注册级别为 4 的命令函数。
/// @param name 命令名称。
/// @param action 命令函数。
#define APPLICATION_REGISTER_COMMAND4(name, action) APPLICATION_REGISTER_COMMAND(name, action, "4")
/// @brief 向应用程序注册级别为 5 的命令函数。
/// @param name 命令名称。
/// @param action 命令函数。
#define APPLICATION_REGISTER_COMMAND5(name, action) APPLICATION_REGISTER_COMMAND(name, action, "5")
/// @brief 向应用程序注册级别为 6 的命令函数。
/// @param name 命令名称。
/// @param action 命令函数。
#define APPLICATION_REGISTER_COMMAND6(name, action) APPLICATION_REGISTER_COMMAND(name, action, "6")
/// @brief 向应用程序注册级别为 7 的命令函数。
/// @param name 命令名称。
/// @param action 命令函数。
#define APPLICATION_REGISTER_COMMAND7(name, action) APPLICATION_REGISTER_COMMAND(name, action, "7")
/// @brief 向应用程序注册级别为 8 的命令函数。
/// @param name 命令名称。
/// @param action 命令函数。
#define APPLICATION_REGISTER_COMMAND8(name, action) APPLICATION_REGISTER_COMMAND(name, action, "8")
/// @brief 根据命令名称执行命令函数(指定命令级)。
/// @param name 命令名称。
/// @param parameter 命令行。
/// @return 返回命令是否成功执行。
bool Application_Execute(uint8_t level, const char *name, void *parameter);

/*APP INVOKER*/
/// @brief 委托应用程序所在的线程调用动作。在任务繁重且当前线程(含中断)不适合处理时使用。
/// @param action 动作函数。
void Application_Invoke(ActionType action);
#endif
