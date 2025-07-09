# 3LEDs-Buttons

# Table of Contents

- [Overview](#overview)
- [Methods](#methods)
- [Equipment](#equipment)
- [Procedure](#procedure)
- [Output](#output)

---

## Overview 

This is task one in the Electrical & Electronics Engineering track,
submitted to Smart Methods Company for 2025 Summer Internship. This task
presents an integrated circuit controlled by Arduino to light 3 LEDs
using individual push buttons.

---

## Methods 

First, the main environment is Tinkercad as this program provides the
required tools for the task.

---

## Equipment

| Component        | Quantity                |
|------------------|------------------------|
| Push Button      | 3                      |
| LED              | 3 (1 Red, 1 Green, 1 Blue) |
| Arduino UNO      | 1                      |
| Breadboard       | 1                      |
| Resistor         | 3 of 220 Ω             |
| Wires            | 14                     |

---

## Procedure 

-   Insert the push buttons on the breadboard, connecting in parallel.

-   Insert the LEDs with the resistors connected in parallel on the
    breadboard.

-   Connect the ground (GND) from the Arduino to the negative rail
    (Ground) on the breadboard.

-   Connect the power supply (5v) from the Arduino to the positive rail
    on the breadboard.

-   Connect one terminal of each push button with the ground on the
    breadboard.

-   Connect the other terminal of each push button to Arduino’s digital
    pins (D2, D3, D4) respectively.

-   Connect the Cathode (short leg) of each LED with the ground on the
    breadboard.

-   Connect the Anode of (long leg) of each LED to the Arduino’s digital
    pins (D5, D6, D7) through the resistors.

-   Write and upload the code using Arduino IDE and simulate it in
    Tinkercad.

Note: The circuit should be like the following figure & the code is
attached as a separate file in the repository.

[]

Figure 1: Circuit

As shown in Figure 1, each button controls one LED. For illustration,
the left button is responsible for red LED, whereas the right button
operates the blue LED. The green LED is connected to the middle button.

---

## Output 

[]

Figure 2: Red LED

[A circuit board with wires connected to it AI-generated content may be
incorrect.]

Figure 3: Green LED

[]

Figure 4: Blue LED

The previous figures display the output of the program. Once the
simulation starts, pressing a button lights up the corresponding LED. If
the button is released, the LED turns off.
