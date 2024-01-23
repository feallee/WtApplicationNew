#ifndef __CONFIG_H_
#define __CONFIG_H_
#include "define.h"

/*VERSION BEGIN*/
/// @brief 产品名称。
#define VERSION_PRODUCT "LGL"
/// @brief 网络制式。2G/3G/4G/5G/6G/NB/CATM/CAT1/CAT4
#define VERSION_NETWORK "4G"
/// @brief 客户标识。指明表示客户定制版本。QTK/ELC
#define VERSION_CUSTOMER ""
/// @brief 功能特性。General 表示通用。
#define VERSION_FUNCTION "General"
/// @brief 通信协议。PTC = 明文逗号协议; JT808 = 部标协议;
#define VERSION_PROTOCOL "PTC"
/// @brief 主要版本号。0 to 4293
#define VERSION_MAJOR 1
/// @brief 次要版本号。0 to 999
#define VERSION_MINOR 0
/// @brief 修订版本号。0 to 999
#define VERSION_REVISION 1
#define VERSION_TO_TEXT(v) #v
#define VERSION_TO_TEXT3(a, b, c) VERSION_TO_TEXT(a.b.c)
/// @brief 获取版本号数值。如：1000001。
#define VERSION_NUMBER VERSION_MAJOR * 1000000 + VERSION_MINOR * 1000 + VERSION_REVISION
/// @brief 获取部分版本号字符串。如：V1.0.1。
#define VERSION_TINY "V" VERSION_TO_TEXT3(VERSION_MAJOR, VERSION_MINOR, VERSION_REVISION)
/// @brief 获取完整的版本号字符串。如：LGL_Dec 14 2023_4G__General_PTC_V1.0.1。
#define VERSION_FULL VERSION_PRODUCT "_" __DATE__ "_" VERSION_NETWORK "_" VERSION_CUSTOMER "_" VERSION_FUNCTION "_" VERSION_PROTOCOL "_" VERSION_TINY
/*VERSION END*/
#endif
