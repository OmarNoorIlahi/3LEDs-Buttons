# 3LEDs-Buttons

# Overview

This is task one in the Electrical & Electronics Engineering track, submitted to Smart Methods Company for 2025 Summer Internship. This task presents an integrated circuit controlled by Arduino to light 3 LEDs using individual push buttons.

---

## Methods

First, the main environment is Tinkercad as this program provides the required tools for the task.

### Equipment

| Component   | Quantity              |
|------------|------------------------|
| Push Button| 3                      |
| LED        | 3 (1 Red, 1 Green, 1 Blue) |
| Arduino UNO| 1                      |
| Breadboard | 1                      |
| Resistor   | 3 of 220 Ω             |
| Wires      | 14                     |

### Procedure

- Insert the push buttons on the breadboard, connecting in parallel.
- Insert the LEDs with the resistors connected in parallel on the breadboard.
- Connect the ground (GND) from the Arduino to the negative rail (Ground) on the breadboard.
- Connect the power supply (5v) from the Arduino to the positive rail on the breadboard.
- Connect one terminal of each push button with the ground on the breadboard.
- Connect the other terminal of each push button to Arduino’s digital pins (D2, D3, D4) respectively.
- Connect the Cathode (short leg) of each LED with the ground on the breadboard.
- Connect the Anode (long leg) of each LED to the Arduino’s digital pins (D5, D6, D7) through the resistors.
- Write and upload the code using Arduino IDE and simulate it in Tinkercad.

**Note:** The circuit should be like the following figure & the code is attached as a separate file in the repository.

<p align="center">
  <img src="[3 LEDs with Buttons Circuit.png]/circuit.png" alt="Circuit Diagram">
  <br><b>Figure 1: Circuit</b>
</p>

As shown in Figure 1, each button controls one LED. For illustration, the left button is responsible for red LED, whereas the right button operates the blue LED. The green LED is connected to the middle button.

---

## Output

<p align="center">
  <img src="[Red LED.png]/red_led.png" alt="Red LED">
  <br><b>Figure 2: Red LED</b>
</p>

<p align="center">
  <img src="[Green LED.png]/green_led.png" alt="Green LED">
  <br><b>Figure 3: Green LED</b>
</p>

<p align="center">
  <img src="[Blue LED.png]/blue_led.png" alt="Blue LED">
  <br><b>Figure 4: Blue LED</b>
</p>

The previous figures display the output of the program. Once the simulation starts, pressing a button lights up the corresponding LED. If the button is released, the LED turns off.
