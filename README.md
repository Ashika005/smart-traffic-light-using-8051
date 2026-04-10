# 🚦 Smart Traffic Light Controller — AT89C51 (8051)

> Embedded C simulation of a real-world traffic light system with 
> pedestrian crossing mode, built using Keil uVision and Proteus 8.

---

## 📸 Circuit Simulation

![Proteus Simulation Circuit](Protrus%20Simulation%20Circuit.jpg)

![Simulation Circuit](simulation%20circuit.jpg)

---

## 🎥 Demo Video

> 📽️ [Click here to watch the simulation video](proteus%20simulation%20video.mp4)

---

## 📌 Project Overview

This project simulates a **traffic light controller** on the AT89C51 
microcontroller using Timer0 for precise timing delays. A pedestrian 
crossing mode is triggered via a push button connected to P3.2.

Designed as part of my embedded systems learning journey in 
**Electronics & Instrumentation Engineering (Sem 6)**.

---

## ⚙️ Features

- ✅ Automatic RED → GREEN → YELLOW LED sequencing
- ✅ Precise timer delays using Timer0 (Mode 1, 16-bit)
- ✅ Pedestrian crossing mode via push button on P3.2
- ✅ Software debouncing for reliable button detection
- ✅ Full Proteus simulation — no hardware required
- ✅ Clean state-based logic in Embedded C

---

## 🛠️ Tools & Technologies

| Tool | Purpose |
|------|---------|
| Keil uVision 5 | Embedded C coding and HEX generation |
| Proteus 8 | Circuit design and simulation |
| AT89C51 | 8051 family microcontroller |
| Embedded C (C89) | Programming language |
| Git + GitHub | Version control |

---

## 🔌 Pin Mapping

| Pin | Component | Function |
|-----|-----------|----------|
| P1.0 | RED LED | Red phase — 5 seconds |
| P1.1 | GREEN LED | Green phase — 3 seconds |
| P1.2 | YELLOW LED | Yellow phase — 2 seconds |
| P3.2 | Push button | Pedestrian crossing trigger |

---

## 🧩 Circuit Components

| Component | Value | Purpose |
|-----------|-------|---------|
| AT89C51 | — | Main microcontroller |
| LED x3 | Red, Green, Yellow | Traffic light output |
| Resistor x3 | 100Ω | LED current limiting |
| Resistor | 10kΩ | Pull-up for push button |
| Resistor | 8.2kΩ | Reset circuit |
| Capacitor | 10µF | Reset circuit |
| Crystal | 11.0592 MHz | Clock source |
| Capacitor x2 | 33pF | Crystal stabilization |
| Push button | — | Pedestrian crossing input |

---

## 📁 File Structure

smart-traffic-light-using-8051

├── traffic.c                     → Main logic and LED state machine

├── timer.h                       → Timer0 delay function (1ms resolution)

├── Protrus Simulation Circuit.jpg → Proteus circuit screenshot

├── simulation circuit.jpg        → Circuit diagram

└── proteus simulation video.mp4  → Live simulation demo

---

## 💡 How It Works

### Delay Function — timer.h
Timer0 is configured in **Mode 1 (16-bit)** with reload values
`TH0=0xFC, TL0=0x67` to generate a precise **1ms tick** at
11.0592MHz. The delay function loops this for any millisecond count.

### Main Logic — traffic.c

RED (5s) → GREEN (3s) → YELLOW (2s) → repeat

During RED phase, P3.2 is polled every 500ms. If the pedestrian 
button is pressed, RED holds for an extra 2 seconds before resuming.

---

## 🧠 Concepts Demonstrated

- Timer0 configuration and polling on 8051
- GPIO control using `sbit` in Keil C
- State machine design for real-world control
- C89 variable declaration rules (Keil compiler)
- Push button interfacing with pull-up resistor
- Keil → HEX → Proteus simulation workflow
- Git version control from command line

---

## 👩‍💻 Author

**Ashika**
Electronics & Instrumentation Engineering Student
📌 Seeking embedded systems summer internship in Bangalore 2026
🔗 [GitHub](https://github.com/Ashika005)

---

## 📜 License
Open source — free to use and modify for learning purposes.
