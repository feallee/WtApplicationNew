/**
 * @brief Ӧ�ó�����ض��塣
 * @copyright Copyright(C) 2023 We as Top team. All rights reserved.
 * @section �޶���־
 * ����         ����                ����
 * -------------------------------------------------------------------------
 * 2023/11/30   feallee@hotmail.com ���档
 */
#ifndef __WT_DEFINE_H_
#define __WT_DEFINE_H_
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdint.h>
#include <stdbool.h>
#include <stdarg.h>
#include <WtConfig.h>
#include <WtVersion.h>
#include <WtCommand.h>
#include <WtEntry.h>
// TODO Register header files here.

/*���ݰ����*/
/// @brief ���ݰ�(256B)���͡�
typedef struct
{
    /// @brief ��ȡ���������ݰ��Ĺؼ��֡�
    uint16_t Key : 7;
    /// @brief ��ȡ���������ݰ��ĳ��ȡ�
    uint16_t Length : 9;
    /// @brief ��ȡ���������ݰ���ֵ��
    char Value[256];
} DataPacket256Type;
typedef struct
{
    uint16_t Key : 5;
    uint16_t Length : 11;
    char Value[1024];
} DataPacket1024Type;
typedef struct
{
    uint16_t Key : 6;
    uint16_t Length : 10;
    char Value[512];
} DataPacket512Type;
typedef struct
{
    uint16_t Key : 8;
    uint16_t Length : 8;
    char Value[128];
} DataPacket128Type;
typedef struct
{
    uint16_t Key : 9;
    uint16_t Length : 7;
    char Value[64];
} DataPacket64Type;
typedef struct
{
    uint16_t Key : 10;
    uint16_t Length : 6;
    char Value[32];
} DataPacket32Type;
typedef struct
{
    uint16_t Key : 11;
    uint16_t Length : 5;
    char Value[16];
} DataPacket16Type;

// TODO Define global types here.

#endif