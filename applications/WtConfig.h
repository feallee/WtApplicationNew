/**
 * @brief 应用程序配置管理。
 * @copyright Copyright(C) 2023 We as Top team. All rights reserved.
 * @section 修订日志
 * 日期         作者                内容
 * -------------------------------------------------------------------------
 * 2024/4/26   feallee@hotmail.com 初版。
 */
#ifndef __WT_CONFIG_H_
#define __WT_CONFIG_H_

/// @brief 应用程序调试模式。
#define WT_APPLICATION_DEBUG

/// @brief 产品名称。
#define WT_VERSION_PRODUCT_NAME "LGL" // TODO: 产品名称
/// @brief 网络制式。
#define WT_VERSION_PRODUCT_NETWORK "4G" // TODO: 网络制式，如 2G/3G/4G/5G/6G/NB/CAT1/CAT4/...
/// @brief 客户标识。
#define WT_VERSION_PRODUCT_CUSTOMER "MOBI" // TODO: 客户标识，如 QTK/ELC/MOBI/...
/// @brief 功能特性。
#define WT_VERSION_PRODUCT_FUNCTION "General" // TODO: 功能特性，如 General/Alarm/Security/...
/// @brief 通信协议。
#define WT_VERSION_PRODUCT_PROTOCOL "PT" // TODO: 通信协议，如 PT/JT808/...

/// @brief 主要版本号。
#define WT_VERSION_MAJOR 1 // TODO: 0 to 4293
/// @brief 次要版本号。
#define WT_VERSION_MINOR 0 // TODO: 0 to 999
/// @brief 修订版本号。
#define WT_VERSION_REVISION 1 // TODO: 0 to 999

#endif
