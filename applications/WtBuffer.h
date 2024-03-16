/**
 * @brief Ӧ�ó���汾����
 * @copyright Copyright(C) 2023 We as Top team. All rights reserved.
 * @section �޶���־
 * ����         ����                ����
 * -------------------------------------------------------------------------
 * 2023/11/30   feallee@hotmail.com ���档
 */
#ifndef __WT_BUFFER_H_
#define __WT_BUFFER_H_
#include <WtApplication.h>

/// @brief ���������ƿ顣
typedef struct
{
	/// @brief ��ȡ�����û������������ڴ�ء�
	char *Pool;
	/// @brief ��ȡ�����û�������������
	uint16_t Capacity;
	/// @brief ��ȡ�����û�������������ת��־��
	uint16_t ReadMirror : 1;
	/// @brief ��ȡ�����û�����������ָ�롣
	uint16_t ReadIndex : 15;
	/// @brief ��ȡ�����û�����д������ת��־��
	uint16_t WriteMirror : 1;
	/// @brief ��ȡ�����û�����д����ָ�롣
	uint16_t WriteIndex : 15;
} WtBuffer_Type;

/// @brief ��ʼ����������
/// @param buffer ���������ƿ顣
/// @param pool �ڴ�ء�
/// @param capacity ����������[1,32768]�����������Χ��ʹ��Ĭ��ֵ 8��
void WtBuffer_Initialize(WtBuffer_Type *buffer, char *pool, uint16_t capacity);

/// @brief �򻺳���д��һ���ֽ����ݡ�
/// @param buffer ���������ƿ顣
/// @param value Դ���ݡ�
/// @return �����Ƿ�ɹ�д�뻺������
bool WtBuffer_PutChar(WtBuffer_Type *buffer, char value);

/// @brief �ӻ�������ȡһ���ֽ����ݡ�
/// @param buffer ���������ƿ顣
/// @param value Ŀ������ָ�롣
/// @return ���س��Ƿ񹦶�ȡ���ݡ�
bool WtBuffer_GetChar(WtBuffer_Type *buffer, char *value);
#endif
