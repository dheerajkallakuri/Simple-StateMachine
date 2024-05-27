# Arduino Nano 33 BLE Sense State Machine Project

## Overview

This project involves using the Arduino Nano 33 BLE Sense to implement a simple state machine. Each state in the state machine is associated with a unique color displayed on the inbuilt RGB LED. The RGB LED is connected to pins 22, 23, and 24. The state machine transitions between states using a push-button mechanism, which can be either an external hardware switch or a software-implemented soft switch.

## Components

- **Arduino Nano 33 BLE Sense**
- **RGB LED** (built-in, connected to pins 22, 23, and 24)
- **Push Button** (external hardware switch or software-implemented soft switch)

## Features

- Implementation of a state machine with unique colors for each state.
- Use of the inbuilt RGB LED for state indication.
- Push-button mechanism to control state transitions.

## Setup and Installation

### Hardware Requirements

1. **Arduino Nano 33 BLE Sense**: Ensure that you have the board and necessary cables.
2. **Push Button (optional)**: If using an external switch, you will need a push button and necessary wiring components.

### Software Requirements

- **Arduino IDE**: Download and install the latest version from the [Arduino website](https://www.arduino.cc/en/software).
- **ArduinoBLE Library**: Install this library via the Library Manager in the Arduino IDE.

### Wiring Diagram

If using an external push button:

1. Connect one leg of the push button to a digital I/O pin on the Arduino Nano 33 BLE Sense.
2. Connect the other leg of the push button to the ground (GND).

### Code

1. Open the Arduino IDE.
2. Install necessary libraries if not already installed.
3. Copy and paste the provided code into a new Arduino sketch.
4. Adjust pin definitions and other parameters as necessary.
5. Upload the sketch to the Arduino Nano 33 BLE Sense.

## Usage

1. **Initial State**: When the Arduino Nano 33 BLE Sense is powered on, it will start in the initial state, indicated by a specific color on the RGB LED.
2. **State Transitions**: Pressing the push button (or activating the soft switch) will transition the state machine to the next state. Each state will be indicated by a different color on the RGB LED.

## Notes

- Ensure the Arduino Nano 33 BLE Sense is properly connected to your computer.
- Verify the correct board and port are selected in the Arduino IDE.
- The push button should be debounced to avoid multiple state transitions due to noise.

## Troubleshooting

- If the RGB LED does not light up, check the connections to pins 22, 23, and 24.
- Ensure the push button is connected correctly and functioning.
- Use the Serial Monitor for debugging if needed.

By following this guide, you should be able to successfully implement and run a simple state machine using the Arduino Nano 33 BLE Sense and its built-in RGB LED.
