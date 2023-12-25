/**
 * @brief 提供应用程序版本管理接口。
 * @copyright Copyright(C) 2023 We as Top team. All rights reserved.
 * @section 修订日志
 * 日期         作者                内容
 * -------------------------------------------------------------------------
 * 2023/12/25   feallee@hotmail.com 初版。
 */
#ifndef __APP_VERSION_H_
#define __APP_VERSION_H_
/// @brief 产品名称。
#define APP_VERSION_PRODUCT "LGL"
/// @brief 网络制式。2G/3G/4G/5G/6G/NB/CATM/CAT1/CAT4
#define APP_VERSION_NETWORK "4G"
/// @brief 客户标识。指明表示客户定制版本。QTK/ELC
#define APP_VERSION_CUSTOMER ""
/// @brief 功能特性。General 表示通用。
#define APP_VERSION_FUNCTION "General"
/// @brief 通信协议。PTC = 明文逗号协议; JT808 = 部标协议;
#define APP_VERSION_PROTOCOL "PTC"
/// @brief 主要版本号。0 to 4293
#define APP_VERSION_MAJOR 1
/// @brief 次要版本号。0 to 999
#define APP_VERSION_MINOR 0
/// @brief 修订版本号。0 to 999
#define APP_VERSION_REVISION 1
#define APP_VERSION_TO_TEXT(v) #v
#define APP_VERSION_TO_TEXT3(a, b, c) APP_VERSION_TO_TEXT(a.b.c)
/// @brief 获取版本号数值。如：1,000,001。
#define APP_VERSION_NUMBER APP_VERSION_MAJOR * 1000000 + APP_VERSION_MINOR * 1000 + APP_VERSION_REVISION
/// @brief 获取部分版本号字符串。如：V1.0.1。
#define APP_VERSION_TINY "V" APP_VERSION_TO_TEXT3(APP_VERSION_MAJOR, APP_VERSION_MINOR, APP_VERSION_REVISION)
/// @brief 获取完整的版本号字符串。如：LGL_Dec 14 2023_4G__General_PTC_V1.0.1。
#define APP_VERSION_FULL APP_VERSION_PRODUCT "_" __DATE__ "_" APP_VERSION_NETWORK "_" APP_VERSION_CUSTOMER "_" APP_VERSION_FUNCTION "_" APP_VERSION_PROTOCOL "_" APP_VERSION_TINY
#endif
