#ifndef RC522_H
#define RC522_H

#include "stm32f4xx.h"

void RC522_Init(void);
uint8_t RC522_Read(uint8_t reg);
uint8_t RC522_DetectTag(uint8_t *uid);
void RC522_GetTagUID(uint8_t *uid);

#endif
