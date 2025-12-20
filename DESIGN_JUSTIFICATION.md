# Design Justification & Component Selection

## Project Overview
This project is a long-range FPV glider designed to be a smart RC airplane with
stabilization, GPS navigation, and live video transmission. The goal of this project
was to learn about fixed-wing flight control systems, FPV integration, and autonomous
features such as Return-to-Home (RTH).

---

## Why I Chose These Components

### Airframe
I selected the LMI / FOX EPP Glider (120 cm) because EPP foam is durable, lightweight,
and forgiving for beginners. The large wingspan provides good glide efficiency and
long flight times, which is important for FPV and GPS-based navigation.

### Flight Controller (F4 V3 INAV)
I chose an INAV-compatible flight controller because it is specifically designed
for fixed-wing aircraft and supports features such as:
- Stabilized flight
- GPS telemetry
- Return-to-Home (RTH)
- On-screen data (altitude, speed, distance)

INAV was selected over manual-only control to improve safety and learning value.

### GPS Module (Beitian BE220 M8N)
This GPS module supports GPS, GLONASS, and BeiDou, which improves satellite lock
reliability. It enables speed measurement, position tracking, and RTH functionality.

### FPV System
An AIO FPV camera was chosen to reduce wiring complexity and save weight. The goal
was to achieve basic live video rather than HD recording, prioritizing simplicity
and reliability.

### Radio System
The FlySky FS-i6 was chosen due to availability, affordability, and compatibility
with INAV. It provides enough channels for flight modes and safety switches.

---

## Why There Are No Custom Renders or CAD Images

I want to be transparent that I currently **do not have experience creating CAD models
or Blender renders**. While I understand the importance of visual documentation, my
focus for this project was on:
- System architecture
- Component compatibility
- Flight controller configuration
- Safety features (failsafe, RTH)

Instead of creating misleading or low-quality renders, I chose to document my design
decisions in written form.

---

## Planned Visual Documentation (Future Work)

If I continue this project, the next steps would be:
- Learn basic Blender or CAD modeling
- Create a simplified fuselage and wing model
- Add wiring and component placement diagrams
- Photograph the real build once assembly begins

---

## Learning Outcomes

Through this project, I learned:
- How GPS integrates with fixed-wing flight controllers
- How FPV systems are powered and connected
- How to select motors, props, and batteries for endurance flight
- How INAV handles navigation and safety modes

This project represents my **design and planning phase**, not a finished aircraft.

