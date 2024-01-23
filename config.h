#ifndef __CONFIG_H_
#define __CONFIG_H_
#include "define.h"

/*VERSION BEGIN*/
/// @brief ��Ʒ���ơ�
#define VERSION_PRODUCT "LGL"
/// @brief ������ʽ��2G/3G/4G/5G/6G/NB/CATM/CAT1/CAT4
#define VERSION_NETWORK "4G"
/// @brief �ͻ���ʶ��ָ����ʾ�ͻ����ư汾��QTK/ELC
#define VERSION_CUSTOMER ""
/// @brief �������ԡ�General ��ʾͨ�á�
#define VERSION_FUNCTION "General"
/// @brief ͨ��Э�顣PTC = ���Ķ���Э��; JT808 = ����Э��;
#define VERSION_PROTOCOL "PTC"
/// @brief ��Ҫ�汾�š�0 to 4293
#define VERSION_MAJOR 1
/// @brief ��Ҫ�汾�š�0 to 999
#define VERSION_MINOR 0
/// @brief �޶��汾�š�0 to 999
#define VERSION_REVISION 1
#define VERSION_TO_TEXT(v) #v
#define VERSION_TO_TEXT3(a, b, c) VERSION_TO_TEXT(a.b.c)
/// @brief ��ȡ�汾����ֵ���磺1000001��
#define VERSION_NUMBER VERSION_MAJOR * 1000000 + VERSION_MINOR * 1000 + VERSION_REVISION
/// @brief ��ȡ���ְ汾���ַ������磺V1.0.1��
#define VERSION_TINY "V" VERSION_TO_TEXT3(VERSION_MAJOR, VERSION_MINOR, VERSION_REVISION)
/// @brief ��ȡ�����İ汾���ַ������磺LGL_Dec 14 2023_4G__General_PTC_V1.0.1��
#define VERSION_FULL VERSION_PRODUCT "_" __DATE__ "_" VERSION_NETWORK "_" VERSION_CUSTOMER "_" VERSION_FUNCTION "_" VERSION_PROTOCOL "_" VERSION_TINY
/*VERSION END*/
#endif
