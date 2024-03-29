/**
 * @brief 应用程序相关定义。
 * @copyright Copyright(C) 2023 We as Top team. All rights reserved.
 * @section 修订日志
 * 日期         作者                内容
 * -------------------------------------------------------------------------
 * 2023/11/30   feallee@hotmail.com 初版。
 */
#ifndef __WT_DEFINE_H_
#define __WT_DEFINE_H_
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdint.h>
#include <stdbool.h>
#include <stdarg.h>
#include <rtthread.h>
#include <WtBuild.h>
#include <WtConfig.h>
#include <WtVersion.h>

// TODO Register header files here.

/// @brief 无参数且无返回值函数指针类型。
typedef void (*WtActionType)(void);

/// @brief 命令函数指针类型。
/// @param sender 命令源。
/// @param parameter 命令关联参数。
/// @return 返回执行命令结果。
typedef int (*WtCommandType)(int sender, void *parameter);

/*应用程序命令源相关，最多支持 32 条*/
/// @brief 未知命令源。
#define WT_APPLICATION_COMMAND_SENDER_UNKNOWN 0x00000000
/// @brief 所有命令源。
#define WT_APPLICATION_COMMAND_SENDER_ALL 0xFFFFFFFF
/// @brief 命令源为控制台。
#define WT_APPLICATION_COMMAND_SENDER_CONSOLE 0x00000001
/// @brief 命令源为网络。
#define WT_APPLICATION_COMMAND_SENDER_NET 0x00000002
/// @brief 命令源为短信。
#define WT_APPLICATION_COMMAND_SENDER_SMS 0x00000004

// TODO Define global types here.
#endif