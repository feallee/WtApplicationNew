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
#include <WtApplication.h>
#define WT_VERSION_TO_TEXT(v) #v
#define WT_VERSION_TO_TEXT3(a, b, c) WT_VERSION_TO_TEXT(a.b.c)
/// @brief �汾�ű�����ֵ���磺1000001��
#define WT_VERSION_NUMBER WT_VERSION_MAJOR * 1000000 + WT_VERSION_MINOR * 1000 + WT_VERSION_REVISION
/// @brief �汾�Ž����ַ������磺V1.0.1��
#define WT_VERSION_TINY "V" WT_VERSION_TO_TEXT3(WT_VERSION_MAJOR, WT_VERSION_MINOR, WT_VERSION_REVISION)
/// @brief �汾�������ַ������磺LGL_Dec 14 2023_4G_MOBI_General_PTC_V1.0.1��
#define WT_VERSION_FULL WT_PRODUCT_NAME "_" __DATE__ "_" WT_PRODUCT_NETWORK "_" WT_PRODUCT_CUSTOMER "_" WT_PRODUCT_FUNCTION "_" WT_PRODUCT_PROTOCOL "_" WT_VERSION_TINY
/*VERSION END*/
#endif