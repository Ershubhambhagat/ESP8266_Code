# ESP8266 Codes

Welcome to the ESP8266 Sample Codes repository! This repository contains various sample codes for the ESP8266 microcontroller, designed to help you get started with your projects. Each example is well-documented and easy to follow.

## Table of Contents

- Introduction
- Getting Started
- Examples
  - Blinking Inbuilt LED
  - Blinking Two LEDs
- Contributing
- License

## Introduction

The ESP8266 is a low-cost Wi-Fi microchip with full TCP/IP stack and microcontroller capability. This repository provides a collection of sample codes to demonstrate the capabilities of the ESP8266 and to help you get started with your own projects.

## Getting Started

To get started with the ESP8266, you will need the following:
- An ESP8266 development board (e.g., NodeMCU)
- Arduino IDE installed on your computer
- USB cable to connect the ESP8266 to your computer

### Installing the ESP8266 Board Package

1. Open Arduino IDE.
2. Go to **File > Preferences**.
3. In the "Additional Boards Manager URLs" field, add this URL: `http://arduino.esp8266.com/stable/package_esp8266com_index.json`.
4. Go to **Tools > Board > Boards Manager**.
5. Search for "ESP8266" and install the package.

### Selecting the ESP8266 Board

1. Go to **Tools > Board** and select your ESP8266 model (e.g., NodeMCU 1.0).
2. Connect your ESP8266 to your computer using a USB cable.
3. Select the correct COM port under **Tools > Port**.

## Examples

### Blinking Inbuilt LED

This example demonstrates how to blink the inbuilt LED on the ESP8266.

```cpp
void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
  digitalWrite(LED_BUILTIN, HIGH);
  delay(500);
  digitalWrite(LED_BUILTIN, LOW);
  delay(500);
}
