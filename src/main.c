#include "rc522.h"
#include "esp01.h"
#include "system_config.h"

uint8_t uid[5];

int main(void) {
    System_Config();
    RC522_Init();
    ESP01_Init();

    while (1) {
        if (RC522_DetectTag(uid)) {
            ESP01_SendRFIDData(uid, 4);
        }
    }
}
