# 🛒 Assisted Shopping System using STM32F407 + RC522 + ESP01

### Overview
This project implements an **Assisted Shopping System** that automatically identifies retail items using RFID tags and transmits data wirelessly through Wi-Fi.

**Hardware:**
- STM32F407 (Main controller, Cortex-M4)
- RC522 RFID Module (SPI)
- ESP01 Wi-Fi Module (UART)
- Developed using Keil µVision5

---

### Features
- Automated RFID tag detection
- Real-time UART communication with ESP01
- Custom device drivers for SPI and UART (no HAL used)
- Modular firmware structure

---

### Hardware Connections

| Peripheral | Interface | STM32F407 Pin | Module Pin |
|-------------|------------|----------------|-------------|
| RC522       | SPI1       | PA5 (SCK), PA6 (MISO), PA7 (MOSI), PA4 (SS) | SCK, MISO, MOSI, SDA |
| ESP01       | UART2      | PA2 (TX), PA3 (RX) | RX, TX |
| Power       | -          | 3.3V, GND | 3.3V, GND |

---

### Functional Flow
1. System initializes SPI and UART peripherals.
2. RC522 polls for nearby RFID tags.
3. Upon detection, tag UID is read.
4. Data is transmitted via UART to ESP01.
5. ESP01 sends it wirelessly to a server.

---

### Example Output
```
[RC522] Tag Detected: 0xAB 0x22 0xF4 0x9C
[ESP01] Sending data to server...
[ESP01] Transmission successful.
```
