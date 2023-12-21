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

/*STANDARD HEADER*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdint.h>
#include <stdbool.h>
#include <stdarg.h>
#include <rtthread.h>
// TODO Add header files here.

/*APP TYPE*/
/// @brief 应用程序入口类型。
typedef struct
{
    /// @brief 入口函数。
    void (*action)(void);
} wt_application_entry_type;

/// @brief 应用命令类型。
typedef struct
{
    /// @brief 命令名称。
    char *name;
    /// @brief 命令函数。
    /// @param line 命令行。
    void (*action)(char *line);
} wt_application_command_type;

/*APP ENTRY*/
/// @brief 向应用程序注册自动执行入口函数。
/// @param action 入口函数。
/// @param level 执行优先级别。共 8 个级别，执行顺序：1->2->3->4->5->6->7->8。
#define WT_APPLICATION_ENTRY(action, level) const wt_application_entry_type __wt_app_entry_##action __attribute__((used, __section__(".wt_app_entry." level))) = {action}
/// @brief 向应用程序注册优先级别为 1 的自动执行入口函数。
/// @param action 入口函数。
#define WT_APPLICATION_ENTRY1(action) WT_APPLICATION_ENTRY(action, "1")
/// @brief 向应用程序注册优先级别为 2 的自动执行入口函数。
/// @param action 入口函数。
#define WT_APPLICATION_ENTRY2(action) WT_APPLICATION_ENTRY(action, "2")
/// @brief 向应用程序注册优先级别为 3 的自动执行入口函数。
/// @param action 入口函数。
#define WT_APPLICATION_ENTRY3(action) WT_APPLICATION_ENTRY(action, "3")
/// @brief 向应用程序注册优先级别为 4 的自动执行入口函数。
/// @param action 入口函数。
#define WT_APPLICATION_ENTRY4(action) WT_APPLICATION_ENTRY(action, "4")
/// @brief 向应用程序注册优先级别为 5 的自动执行入口函数。
/// @param action 入口函数。
#define WT_APPLICATION_ENTRY5(action) WT_APPLICATION_ENTRY(action, "5")
/// @brief 向应用程序注册优先级别为 6 的自动执行入口函数。
/// @param action 入口函数。
#define WT_APPLICATION_ENTRY6(action) WT_APPLICATION_ENTRY(action, "6")
/// @brief 向应用程序注册优先级别为 7 的自动执行入口函数。
/// @param action 入口函数。
#define WT_APPLICATION_ENTRY7(action) WT_APPLICATION_ENTRY(action, "7")
/// @brief 向应用程序注册优先级别为 8 的自动执行入口函数。
/// @param action 入口函数。
#define WT_APPLICATION_ENTRY8(action) WT_APPLICATION_ENTRY(action, "8")

/*APP INVOKER*/
/// @brief 委托应用程序所在的线程调用动作。在任务繁重且当前线程(含中断)不适合处理时使用。
/// @param entry 动作函数。
void wt_application_invoke(void (*action)(void));

/*APP COMMAND*/
/// @brief 向应用程序注册命令函数。
/// @param name 命令名称。
/// @param action 命令函数。
/// @param level 命令级别。
#define WT_APPLICATION_COMMAND(name, action, level) const wt_application_command_type __wt_app_command_##action __attribute__((used, __section__(".wt_app_command." level))) = {name, action}
/// @brief 向应用程序注册级别为 1 的命令函数。
/// @param name 命令名称。
/// @param action 命令函数。
#define WT_APPLICATION_COMMAND1(name, action) WT_APPLICATION_COMMAND(name, action, "1")
/// @brief 根据命令名称执行命令函数。
/// @param name 命令名称。
/// @param line 命令行。
/// @return 返回命令是否成功执行。
bool wt_application_execute(const char *name, char * line);

#endif
