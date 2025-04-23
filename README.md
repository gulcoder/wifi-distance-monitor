<<<<<<< Updated upstream
# 📡 WiFi Avståndsmätare med Tid, Buzzer & LED

Ett projekt med Raspberry Pi Pico W som ansluter till WiFi, mäter avstånd med en ultraljudssensor, visar datum & tid på en LCD-skärm, piper med buzzer och blinkar med en LED om något är närmare än 100 cm.

## 🔧 Funktioner

- ✅ Ansluter till WiFi
- 📏 Mäter avstånd med HC-SR04
- 🕒 Hämtar tid via NTP (visar svensk tid)
- 📟 Visar data på I2C LCD 16x2
- 🔔 Buzzer-pip vid rörelse under 100 cm
- 💡 LED blinkar samtidigt med buzzer

## 🧪 Använda komponenter

| Komponent | Pin på Pico |
|----------|-------------|
| HC-SR04 Trigger | GPIO 17 |
| HC-SR04 Echo    | GPIO 16 |
| Buzzer          | GPIO 14 |
| LED             | GPIO 15 (eller 16 i testsketch) |
| I2C LCD         | SDA (GPIO 4), SCL (GPIO 5) |
| WiFi            | Inbyggt i Pico W |

## 🔌 Kopplingsschema (textbaserat)

[Pico W] [HC-SR04] [LCD] [LED] [Buzzer] 17 -------- Trigger
16 <-------- Echo 4 -------- SDA (I2C) 5 -------- SCL (I2C) 15 --------> LED (+) ---|>|--- 330Ω --- GND 14 --------> Buzzer + GND ---------------------------- GND 3.3V ---------------------------- VCC (LCD + HC-SR04)
=======
#Min docker projekt
>>>>>>> Stashed changes
