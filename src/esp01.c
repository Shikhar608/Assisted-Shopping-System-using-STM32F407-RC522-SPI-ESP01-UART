#include "esp01.h"

void ESP01_Init(void) {
    RCC->APB1ENR |= RCC_APB1ENR_USART2EN;
    // Configure UART GPIOs
}

void ESP01_SendString(char *str) {
    while (*str) {
        while (!(USART2->SR & USART_SR_TXE));
        USART2->DR = *str++;
    }
}

void ESP01_SendRFIDData(uint8_t *uid, uint8_t len) {
    ESP01_SendString("RFID: ");
    for (uint8_t i = 0; i < len; i++) {
        char buf[5];
        sprintf(buf, "%02X ", uid[i]);
        ESP01_SendString(buf);
    }
    ESP01_SendString("\r\n");
}
