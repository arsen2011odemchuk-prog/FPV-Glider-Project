# FPV-Glider-Project
# Long-Range FPV Glider – Smart RC Airplane

## Overview
The project under discussion involves the conversion of a fixed-wing RC glider into a long-range FPV aircraft, accomplished through the integration of a flight controller and GPS navigation system.
The objective of this project is to construct an economical aircraft capable of transmitting live video footage, displaying flight data, and safely returning to its point of origin in the event of signal interruption.

In contradistinction to toy RC planes, this aircraft is equipped with a flight controller that operates INAV firmware, thereby facilitating stabilisation, GPS tracking, and
Basic autonomous safety features, such as Return-to-Home (RTH), are of paramount importance.

The following section outlines the objectives of the project.
The system under discussion enables the transmission of live FPV video to a ground receiver.
The device is capable of displaying the battery voltage, speed, altitude, and distance using GPS.
The utilisation of a flight controller is imperative for the purpose of achieving stabilisation and auto-leveling.
The system automatically reverts to the initial launch point in the event of signal loss.
The functionality in question enables both manual and stabilised flight modes.

The system architecture is delineated as follows:
The system is centred around an F4 flight controller running INAV firmware.
A Global Positioning System (GPS) module provides position and speed data.
The radio receiver transmits pilot commands to the flight controller.
The electronic speed controller (ESC) drives the brushless motor, while servomotors control the elevator and rudder.
An FPV (First Person View) camera is a device that transmits live video footage to the ground user.

The following section outlines the build process.
1. The EPP glider fuselage and wings should be reinforced using tape and internal supports.
2. The subsequent stage of the process involves the installation of servos into the wings, followed by the connection of control rods.
3. The brushless motor should then be mounted to the nose of the aircraft using a simple motor mount.
4. The next stage of the process is to install the electronic speed controller (ESC) and connect it to the motor and battery.
5. The flight controller must be mounted securely within the fuselage.
6. The GPS module must be installed in a location that provides an unobstructed view of the sky.
7. The FPV camera should be mounted at the front of the aircraft, with a slight upward angle.
8. Prior to flight, it is essential to balance the aircraft and verify the centre of gravity.

The Flight Controller and its associated firmware.
The aircraft utilises an F4 V3 flight controller, which has been configured with INAV firmware.
INAV provides stabilisation, GPS navigation, and safety features.

The following flight modes have been planned:
The camera is to be operated in manual mode.
- Stabilized (Angle) mode
- Return-To-Home (RTH)
- The failsafe function has been configured to initiate a RTH procedure in the event of either radio signal loss or low battery voltage.

The following wiring diagram is provided for reference:
The wiring diagram illustrates all electrical and mechanical connections.
For further details, please refer to the attached diagram (`diagrams/wiring.png`).

The following list details the components that are required for the project:
A comprehensive inventory of components and associated costs can be found in the Bom/Bom.md repository.

It is imperative to consider the following safety notes.
It is imperative to remove the propeller during the configuration of electronic components.
It is imperative to refrain from over-discharging lithium polymer (LiPo) batteries.
Prior to powered flight, it is imperative to conduct a glide test.
It is imperative to ensure that failsafe behaviour is subjected to rigorous testing on the ground.

The following improvements are to be implemented in the future:
It is imperative to upgrade the FPV system in order to achieve a greater range.
The addition of a telemetry radio link is required.
It is imperative to enhance the mounting of the battery and the isolation of vibrations.
