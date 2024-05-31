#ifndef __WT_CHECK_H_
#define __WT_CHECK_H_
#include <stdint.h>
// 04c11db7,lsb,ffffffff,ffffffff
uint32_t WtCheck_Crc32(uint32_t crc, const char *buffer, uint16_t length);

// 1021,MSB,FFFF,FFFF
uint16_t WtCheck_Crc16(uint16_t crc, const char *buffer, uint16_t length);
uint8_t WtCheck_Bcc(uint8_t bcc, const char *buffer, uint16_t length);
uint8_t WtCheck_Cs(uint8_t cs, const char *buffer, uint16_t length);
#endif