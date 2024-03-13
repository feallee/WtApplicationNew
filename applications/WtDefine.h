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
#include <rtthread.h>
#include <WtBuild.h>
#include <WtConfig.h>
#include <WtVersion.h>

// TODO Register header files here.

/// @brief �޲������޷���ֵ����ָ�����͡�
typedef void (*WtActionType)(void);

/// @brief �����ָ�����͡�
/// @param sender ����Դ��
/// @param parameter �������������
/// @return ����ִ����������
typedef int (*WtCommandType)(int sender, void *parameter);

/*Ӧ�ó�������Դ��أ����֧�� 32 ��*/
/// @brief δ֪����Դ��
#define WT_APPLICATION_COMMAND_SENDER_UNKNOWN 0x00000000
/// @brief ��������Դ��
#define WT_APPLICATION_COMMAND_SENDER_ALL 0xFFFFFFFF
/// @brief ����ԴΪ����̨��
#define WT_APPLICATION_COMMAND_SENDER_CONSOLE 0x00000001
/// @brief ����ԴΪ���硣
#define WT_APPLICATION_COMMAND_SENDER_NET 0x00000002
/// @brief ����ԴΪ���š�
#define WT_APPLICATION_COMMAND_SENDER_SMS 0x00000004

// TODO Define global types here.
#endif