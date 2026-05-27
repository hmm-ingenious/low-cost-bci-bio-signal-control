# Low-Cost Brain Computer Interface (BCI)

A low-cost Brain Computer Interface system using EOG (eye blink) and EMG (muscle movement) bio-signals to control computer actions in real time.

## Project Overview

This project demonstrates a low-cost bio-signal based control system built using analog signal conditioning, ESP32, and Python automation.

Eye blinks and forearm muscle activity are detected, processed, and converted into digital commands.

Demo application: Chrome Dino Game control.

## Features

- Eye blink detection
- Forearm muscle detection
- ESP32 real-time signal acquisition
- Signal filtering and amplification
- Python keyboard automation
- Human-computer interaction demo

## Hardware Used

- ESP32
- AD620 instrumentation amplifier
- Surface electrodes
- Op-amps
- Analog filters
- Breadboard
- Power supply

## Software Stack

- Arduino IDE
- Python
- pyserial
- keyboard library

## Working Principle

Electrodes capture bio-signals.

Analog circuitry amplifies and filters EOG and EMG signals.

ESP32 reads analog values and detects signal events.

Python reads serial output and triggers keyboard actions.

Controls:

- Blink → Jump
- Muscle flex → Crouch

## Applications

- Assistive technology
- Human-computer interaction
- Prosthetic control
- Biomedical embedded systems

## Future Improvements

- 50Hz notch filtering
- Better signal classification
- Wireless communication
- Machine learning based control

## Team

Project Mentors:
Charan, Dhanya

Team Members:
Aryan, Hithinsai, Hadi Hasan, Chitropal
