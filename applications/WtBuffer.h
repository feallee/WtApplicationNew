/**
 * @brief 应用程序版本管理。
 * @copyright Copyright(C) 2023 We as Top team. All rights reserved.
 * @section 修订日志
 * 日期         作者                内容
 * -------------------------------------------------------------------------
 * 2023/11/30   feallee@hotmail.com 初版。
 */
#ifndef __WT_BUFFER_H_
#define __WT_BUFFER_H_
#include <WtApplication.h>

/// @brief 缓冲区控制块。
typedef struct
{
	/// @brief 获取或设置缓冲区关联的内存池。
	char *Pool;
	/// @brief 获取或设置缓冲区的容量。
	uint16_t Capacity;
	/// @brief 获取或设置缓冲区读操作反转标志。
	uint16_t ReadMirror : 1;
	/// @brief 获取或设置缓冲区读操作指针。
	uint16_t ReadIndex : 15;
	/// @brief 获取或设置缓冲区写操作反转标志。
	uint16_t WriteMirror : 1;
	/// @brief 获取或设置缓冲区写操作指针。
	uint16_t WriteIndex : 15;
} WtBuffer_Type;

/// @brief 初始化缓冲区。
/// @param buffer 缓冲区控制块。
/// @param pool 内存池。
/// @param capacity 缓冲区容量[1,32768]，如果超出范围，使用默认值 8。
void WtBuffer_Initialize(WtBuffer_Type *buffer, char *pool, uint16_t capacity);

/// @brief 向缓冲区写入一个字节数据。
/// @param buffer 缓冲区控制块。
/// @param value 源数据。
/// @return 返回是否成功写入缓冲区。
bool WtBuffer_PutChar(WtBuffer_Type *buffer, char value);

/// @brief 从缓冲区读取一个字节数据。
/// @param buffer 缓冲区控制块。
/// @param value 目的数据指针。
/// @return 返回成是否功读取数据。
bool WtBuffer_GetChar(WtBuffer_Type *buffer, char *value);
#endif
