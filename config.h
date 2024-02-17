#ifndef __CONFIG_H_
#define __CONFIG_H_
/*STANDARD HEADER FILES BEGIN*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdint.h>
#include <stdbool.h>
#include <stdarg.h>
#include <rtthread.h>
// TODO Register standard header files here...
/*STANDARD HEADER FILES END*/

/*VERSION BEGIN*/
/// @brief 产品名称。
#define VERSION_PRODUCT "LGL" // TODO ...
/// @brief 网络制式。
#define VERSION_NETWORK "4G" // TODO 2G/3G/4G/5G/6G/NB/CAT1/CAT4/...
/// @brief 客户标识。
#define VERSION_CUSTOMER "MOBI" // TODO QTK/ELC/MOBI/...
/// @brief 功能特性。
#define VERSION_FUNCTION "General" // TODO ...
/// @brief 通信协议。
#define VERSION_PROTOCOL "PTC" // TODO PTC/JT808/...
/// @brief 主要版本号。
#define VERSION_MAJOR 1 // TODO 0 to 4293...
/// @brief 次要版本号。
#define VERSION_MINOR 0 // TODO 0 to 999...
/// @brief 修订版本号。
#define VERSION_REVISION 1 // TODO 0 to 999...
#define VERSION_TO_TEXT(v) #v
#define VERSION_TO_TEXT3(a, b, c) VERSION_TO_TEXT(a.b.c)
/// @brief 版本号标量数值。如：1000001。
#define VERSION_NUMBER VERSION_MAJOR * 1000000 + VERSION_MINOR * 1000 + VERSION_REVISION
/// @brief 版本号紧凑字符串。如：V1.0.1。
#define VERSION_TINY "V" VERSION_TO_TEXT3(VERSION_MAJOR, VERSION_MINOR, VERSION_REVISION)
/// @brief 版本号完整字符串。如：LGL_Dec 14 2023_4G_MOBI_General_PTC_V1.0.1。
#define VERSION_FULL VERSION_PRODUCT "_" __DATE__ "_" VERSION_NETWORK "_" VERSION_CUSTOMER "_" VERSION_FUNCTION "_" VERSION_PROTOCOL "_" VERSION_TINY
/*VERSION END*/

/*USER TYPES BEGIN*/
/// @brief 无参数且无返回值函数指针类型。
typedef void (*ActionType)(void);
/// @brief 有一个通用指针参数且无返回值函数指针类型。
typedef void (*ActionVoidType)(void *parameter);
/// @brief 通用消息类型(256B)。
typedef struct
{
    /// @brief 通用消息关键字。
    uint16_t Key : 7;
    /// @brief 通用消息长度。
    uint16_t Length : 9;
    /// @brief 通用消息正文。
    uint8_t Value[256];
} Message256Type;
// Define user types here...
/*USER TYPES BEGIN*/

/*USER HEADER FILES BEGIN*/
/// @brief 应用程序委托动作函数数量。
#define APPLICATION_INVOKE_COUNT 8 // TODO 可配置，最少为 1。
// TODO Define configuration here...
/*USER HEADER FILES END*/

/*USER HEADER FILES BEGIN*/
// TODO Register user header files here...
/*USER HEADER FILES END*/

#endif
