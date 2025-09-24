# 🚗 Arduino Bluetooth Controlled Car

## 📌 Overview
This project makes a **Bluetooth-controlled car** using Arduino and the **HC-05 Bluetooth module**.  
You can control the car via a smartphone Bluetooth terminal app.

- `F` → Forward  
- `B` → Backward  
- `L` → Left  
- `R` → Right  
- `S` → Stop  

---

## 🛠️ Hardware Required
- Arduino Uno/Nano  
- HC-05 Bluetooth Module  
- L293D Motor Driver Shield (Adafruit AFMotor Library)  
- 4 DC Motors + Robot chassis + Wheels  
- Battery pack (6–12V)  

---

## 🔌 Wiring
- **HC-05 → Arduino**  
  - VCC → 5V  
  - GND → GND  
  - TX → RX (D0)  
  - RX → TX (D1, use voltage divider)  

- **Motors** → Connected via Motor Driver Shield (M1, M2, M3, M4)  

---

## ▶️ Usage
1. Install **AFMotor** library from Arduino IDE Library Manager.  
2. Upload the code to Arduino.  
3. Pair smartphone with **HC-05** (`1234` or `0000` as password).  
4. Open a Bluetooth terminal app and send commands: `F`, `B`, `L`, `R`, `S`.  
5. Car moves accordingly.  

---

## 📂 Repo Structure
