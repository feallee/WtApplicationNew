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
#include <WtConfig.h>
#include <WtVersion.h>

// TODO Register header files here.
/// @brief �޲������޷���ֵ����ָ�����͡�
typedef void (*WtActionType)(void);
/// @brief �����ָ�����͡�
/// @param sender ����Դ��
/// @param parameter �������������
/// @return ����ִ���������������ߡ�
typedef int (*WtCommandType)(int sender, void *parameter);

// TODO Define global types here.
#endif