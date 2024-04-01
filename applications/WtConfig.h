/**
 * @brief 应用程序配置管理。
 * @copyright Copyright(C) 2023 We as Top team. All rights reserved.
 * @section 修订日志
 * 日期         作者                内容
 * -------------------------------------------------------------------------
 * 2023/11/30   feallee@hotmail.com 初版。
 */
#ifndef __WT_CONFIG_H_
#define __WT_CONFIG_H_

/*产品配置相关*/
/// @brief 产品名称。
#define WT_PRODUCT_NAME "LGL"
/// @brief 网络制式。
#define WT_PRODUCT_NETWORK "4G" // 2G/3G/4G/5G/6G/NB/CAT1/CAT4/...
/// @brief 客户标识。
#define WT_PRODUCT_CUSTOMER "MOBI" // QTK/ELC/MOBI/...
/// @brief 功能特性。
#define WT_PRODUCT_FUNCTION "General"
/// @brief 通信协议。
#define WT_PRODUCT_PROTOCOL "PT" // PT/JT808/...

/*版本配置相关*/
/// @brief 主要版本号。
#define WT_VERSION_MAJOR 1 // 0 to 4293
/// @brief 次要版本号。
#define WT_VERSION_MINOR 0 // 0 to 999
/// @brief 修订版本号。
#define WT_VERSION_REVISION 1 // 0 to 999

/*应用程序配置相关*/
/// @brief 应用程序委托执行器数量。
#define WT_APPLICATION_INVOKER_COUNT (8) // 最小为 1。
/// @brief 应用程序调试模式。
#define WT_APPLICATION_DEBUG (1) // 0=关闭调试，非0=打开调试。
/// @brief 应用程序是否支持休眠。
#define WT_APPLICATION_SUPPORT_SLEEP (1) // 0=不支持休眠，非0=支持休眠。

#endif
