#ifndef ESP01_H
#define ESP01_H

#include "stm32f4xx.h"
#include <stdio.h>

void ESP01_Init(void);
void ESP01_SendString(char *str);
void ESP01_SendRFIDData(uint8_t *uid, uint8_t len);

#endif
