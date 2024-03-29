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

/*应用程序入口相关*/
/// @brief 初始化入口类别，在应用程序初始化时调用。
#define WT_APPLICATION_ENTRY_TYPE_INITIALIZE 1
/// @brief 唤醒入口类别，在应用程序唤醒后调用。
#define WT_APPLICATION_ENTRY_TYPE_WAKEUP 2
/// @brief 休眠入口类别，在应用程序休眠前调用。
#define WT_APPLICATION_ENTRY_TYPE_SLEEP 4

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

/*应用程序命令源相关，最多支持 32 条*/
/// @brief 未知命令源。
#define WT_APPLICATION_COMMAND_SENDER_UNKNOWN 0
/// @brief 所有命令源。
#define WT_APPLICATION_COMMAND_SENDER_ALL 0xFFFFFFFF
/// @brief 命令源为控制台。
#define WT_APPLICATION_COMMAND_SENDER_CONSOLE 0x1
/// @brief 命令源为网络。
#define WT_APPLICATION_COMMAND_SENDER_NET 0x2
/// @brief 命令源为短信。
#define WT_APPLICATION_COMMAND_SENDER_SMS 0x4

/*日志级别，最多支持 32 条*/
#define WT_APPLICATION_LOG_LEVEL_OFF 0
#define WT_APPLICATION_LOG_LEVEL_ALL 0xFFFFFFFF
#define WT_APPLICATION_LOG_LEVEL_GPS 0x1
#define WT_APPLICATION_LOG_LEVEL_GSM 0x2
#define WT_APPLICATION_LOG_LEVEL_BT 0x4

// TODO Define global types here.
#endif