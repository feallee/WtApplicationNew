/**
 * @brief 应用程序相关定义。
 * @copyright Copyright(C) 2023 We as Top team. All rights reserved.
 * @section 修订日志
 * 日期         作者                内容
 * -------------------------------------------------------------------------
 * 2023/11/30   feallee@hotmail.com 初版。
 */
#ifndef __WT_DEFINE_H_
#define __WT_DEFINE_H_

#include <stdint.h>

typedef struct
{
    uint16_t Key : 7;
    uint16_t Length : 9;
    char Value[256];
} WtMessage256_Type;
// TODO Define global types here.
#endif