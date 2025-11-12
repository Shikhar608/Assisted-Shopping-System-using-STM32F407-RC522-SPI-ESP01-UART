#include "rc522.h"

void RC522_Init(void) {
    RCC->APB2ENR |= RCC_APB2ENR_SPI1EN;
    // Configure GPIO for SPI
}

uint8_t RC522_Read(uint8_t reg) {
    uint8_t value = 0;
    // Implement SPI read
    return value;
}

uint8_t RC522_DetectTag(uint8_t *uid) {
    // Simulated detection
    uid[0] = 0xAB; uid[1] = 0x22; uid[2] = 0xF4; uid[3] = 0x9C;
    return 1;
}
