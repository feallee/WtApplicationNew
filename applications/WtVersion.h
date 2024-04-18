/**
 * @brief Ӧ�ó���汾����
 * @copyright Copyright(C) 2023 We as Top team. All rights reserved.
 * @section �޶���־
 * ����         ����                ����
 * -------------------------------------------------------------------------
 * 2023/11/30   feallee@hotmail.com ���档
 */
#ifndef __WT_VERSION_H_
#define __WT_VERSION_H_
#include <WtBuild.h>

/*��Ʒ�������*/
/// @brief ��Ʒ���ơ�
#define WT_VERSION_PRODUCT_NAME "LGL"
/// @brief ������ʽ��
#define WT_VERSION_PRODUCT_NETWORK "4G" // 2G/3G/4G/5G/6G/NB/CAT1/CAT4/...
/// @brief �ͻ���ʶ��
#define WT_VERSION_PRODUCT_CUSTOMER "MOBI" // QTK/ELC/MOBI/...
/// @brief �������ԡ�
#define WT_VERSION_PRODUCT_FUNCTION "General"
/// @brief ͨ��Э�顣
#define WT_VERSION_PRODUCT_PROTOCOL "PT" // PT/JT808/...

/*�汾�������*/
/// @brief ��Ҫ�汾�š�
#define WT_VERSION_MAJOR 1 // 0 to 4293
/// @brief ��Ҫ�汾�š�
#define WT_VERSION_MINOR 0 // 0 to 999
/// @brief �޶��汾�š�
#define WT_VERSION_REVISION 1 // 0 to 999

#define WT_VERSION_TO_TEXT(v) #v
#define WT_VERSION_TO_TEXT3(a, b, c) WT_VERSION_TO_TEXT(a.b.c)
#define WT_VERSION_TO_TEXT1(a) WT_VERSION_TO_TEXT(a)
#define WT_VERSION_BUILD_DATE             \
    WT_VERSION_TO_TEXT1(WT_BUILD_YEAR_2)  \
    WT_VERSION_TO_TEXT1(WT_BUILD_YEAR_1)  \
    WT_VERSION_TO_TEXT1(WT_BUILD_MONTH_2) \
    WT_VERSION_TO_TEXT1(WT_BUILD_MONTH_1) \
    WT_VERSION_TO_TEXT1(WT_BUILD_DAY_2)   \
    WT_VERSION_TO_TEXT1(WT_BUILD_DAY_1)

/// @brief �汾�ű�����ֵ���磺1000001��
#define WT_VERSION_NUMBER WT_VERSION_MAJOR * 1000000 + WT_VERSION_MINOR * 1000 + WT_VERSION_REVISION
/// @brief �汾�Ž����ַ������磺V1.0.1��
#define WT_VERSION_TINY "V" WT_VERSION_TO_TEXT3(WT_VERSION_MAJOR, WT_VERSION_MINOR, WT_VERSION_REVISION)
/// @brief �汾�������ַ������磺LGL_240311_4G_MOBI_General_PT_V1.0.1��
#define WT_VERSION_FULL \
    WT_VERSION_PRODUCT_NAME "_" WT_VERSION_BUILD_DATE "_" WT_VERSION_PRODUCT_NETWORK "_" WT_VERSION_PRODUCT_CUSTOMER "_" WT_VERSION_PRODUCT_FUNCTION "_" WT_VERSION_PRODUCT_PROTOCOL "_" WT_VERSION_TINY
#endif