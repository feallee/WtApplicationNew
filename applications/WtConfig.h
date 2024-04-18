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



/*应用程序配置相关*/
/// @brief 应用程序委托执行器数量。
#define WT_APPLICATION_INVOKER_COUNT (8) // 最小为 1。
/// @brief 应用程序调试模式。
#define WT_APPLICATION_DEBUG (1) // 0=关闭调试，非0=打开调试。
/// @brief 应用程序是否支持休眠。
#define WT_APPLICATION_SUPPORT_SLEEP (1) // 0=不支持休眠，非0=支持休眠。

#endif
