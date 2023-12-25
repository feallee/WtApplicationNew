/**
 * @brief �ṩӦ�ó���汾����ӿڡ�
 * @copyright Copyright(C) 2023 We as Top team. All rights reserved.
 * @section �޶���־
 * ����         ����                ����
 * -------------------------------------------------------------------------
 * 2023/12/25   feallee@hotmail.com ���档
 */
#ifndef __APP_VERSION_H_
#define __APP_VERSION_H_
/// @brief ��Ʒ���ơ�
#define APP_VERSION_PRODUCT "LGL"
/// @brief ������ʽ��2G/3G/4G/5G/6G/NB/CATM/CAT1/CAT4
#define APP_VERSION_NETWORK "4G"
/// @brief �ͻ���ʶ��ָ����ʾ�ͻ����ư汾��QTK/ELC
#define APP_VERSION_CUSTOMER ""
/// @brief �������ԡ�General ��ʾͨ�á�
#define APP_VERSION_FUNCTION "General"
/// @brief ͨ��Э�顣PTC = ���Ķ���Э��; JT808 = ����Э��;
#define APP_VERSION_PROTOCOL "PTC"
/// @brief ��Ҫ�汾�š�0 to 4293
#define APP_VERSION_MAJOR 1
/// @brief ��Ҫ�汾�š�0 to 999
#define APP_VERSION_MINOR 0
/// @brief �޶��汾�š�0 to 999
#define APP_VERSION_REVISION 1
#define APP_VERSION_TO_TEXT(v) #v
#define APP_VERSION_TO_TEXT3(a, b, c) APP_VERSION_TO_TEXT(a.b.c)
/// @brief ��ȡ�汾����ֵ���磺1,000,001��
#define APP_VERSION_NUMBER APP_VERSION_MAJOR * 1000000 + APP_VERSION_MINOR * 1000 + APP_VERSION_REVISION
/// @brief ��ȡ���ְ汾���ַ������磺V1.0.1��
#define APP_VERSION_TINY "V" APP_VERSION_TO_TEXT3(APP_VERSION_MAJOR, APP_VERSION_MINOR, APP_VERSION_REVISION)
/// @brief ��ȡ�����İ汾���ַ������磺LGL_Dec 14 2023_4G__General_PTC_V1.0.1��
#define APP_VERSION_FULL APP_VERSION_PRODUCT "_" __DATE__ "_" APP_VERSION_NETWORK "_" APP_VERSION_CUSTOMER "_" APP_VERSION_FUNCTION "_" APP_VERSION_PROTOCOL "_" APP_VERSION_TINY
#endif
