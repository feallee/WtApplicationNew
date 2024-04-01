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
#include <WtConfig.h>
#include <WtVersion.h>
// TODO Register header files here.

/// @brief 无参数且无返回值函数指针类型。
typedef void (*WtActionType)(void);

/*命令相关*/
/// @brief 命令函数指针类型。
/// @param sender 命令源。
/// @param parameter 命令关联参数。
/// @return 返回执行命令结果。
typedef int (*WtCommandType)(uint32_t sender, void *parameter);
/// @brief 命令源为控制台。
#define WT_COMMAND_SENDER_CONSOLE 1U
/// @brief 命令源为网络。
#define WT_COMMAND_SENDER_NET 2U
/// @brief 命令源为短信。
#define WT_COMMAND_SENDER_SMS 3U
// TODO Define other command senders(range:0-4294967295) here.

/*数据包相关*/
/// @brief 数据包(256B)类型。
typedef struct
{
    /// @brief 获取或设置数据包的关键字。
    uint16_t Key : 7;
    /// @brief 获取或设置数据包的长度。
    uint16_t Length : 9;
    /// @brief 获取或设置数据包的值。
    char Value[256];
} DataPacket256Type;
typedef struct
{
    uint16_t Key : 5;
    uint16_t Length : 11;
    char Value[1024];
} DataPacket1024Type;
typedef struct
{
    uint16_t Key : 6;
    uint16_t Length : 10;
    char Value[512];
} DataPacket512Type;
typedef struct
{
    uint16_t Key : 8;
    uint16_t Length : 8;
    char Value[128];
} DataPacket128Type;
typedef struct
{
    uint16_t Key : 9;
    uint16_t Length : 7;
    char Value[64];
} DataPacket64Type;
typedef struct
{
    uint16_t Key : 10;
    uint16_t Length : 6;
    char Value[32];
} DataPacket32Type;
typedef struct
{
    uint16_t Key : 11;
    uint16_t Length : 5;
    char Value[16];
} DataPacket16Type;

// TODO Define global types here.

#endif