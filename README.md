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


