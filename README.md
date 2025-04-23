# 📡 WiFi Avståndsmätare med Tid, Buzzer & LED

Ett projekt med Raspberry Pi Pico W som ansluter till WiFi, mäter avstånd med en ultraljudssensor, visar datum & tid på en LCD-skärm, piper med buzzer och blinkar med en LED om något är närmare än 100 cm.

## 🔧 Funktioner

- ✅ Ansluter till WiFi
- 📏 Mäter avstånd med HC-SR04
- 🕒 Hämtar tid via NTP (visar svensk tid)
- 📟 Visar data på I2C LCD 16x2
- 🔔 Buzzer-pip vid rörelse under 100 cm
- 💡 LED blinkar samtidigt med buzzer

## Installation

### Förberedelser

För att kunna bygga och köra projektet behöver du klona Pico SDK, som är nödvändigt för att utveckla på Raspberry Pi Pico. Följ stegen nedan för att installera Pico SDK och klona projektet:

### 1. Klona Pico SDK

Först behöver du klona **Pico SDK** om du inte redan har gjort det:

```bash
git clone --recurse-submodules https://github.com/raspberrypi/pico-sdk.git

```

## 🧪 Använda komponenter

| Komponent | Pin på Pico |
|----------|-------------|
| HC-SR04 Trigger | GPIO 17 |
| HC-SR04 Echo    | GPIO 16 |
| Buzzer          | GPIO 14 |
| LED             | GPIO 15 (eller 16 i testsketch) |
| I2C LCD         | SDA (GPIO 4), SCL (GPIO 5) |
| WiFi            | Inbyggt i Pico W |

## 🔌 Kopplingsschema 

(https://sdmntpritalynorth.oaiusercontent.com/files/00000000-98b0-6246-82a2-fb1b48e0b0d4/raw?se=2025-04-23T14%3A05%3A14Z&sp=r&sv=2024-08-04&sr=b&scid=a4c217d9-09bd-5373-b028-953f239d7530&skoid=54ae6e2b-352e-4235-bc96-afa2512cc978&sktid=a48cca56-e6da-484e-a814-9c849652bcb3&skt=2025-04-23T12%3A34%3A38Z&ske=2025-04-24T12%3A34%3A38Z&sks=b&skv=2024-08-04&sig=tRexg48pZSD%2B4zQqUphh13Tx7LuXvgmf1VLjUmZ43uI%3D)![image](https://github.com/user-attachments/assets/fd89d382-b0a2-4232-96d3-f008b07dedb7)
