# Long‑Range FPV Glider – Smart RC Airplane

Project Overview  
This project is a long-range FPV glider designed for hobby and educational use. It uses a GPS module and onboard camera to assist with navigation, monitoring, and basic assisted safety features such as return-to-home and emergency landing behavior.
## How It Works

The FPV glider combines a lightweight airframe with a live video transmission system.

### Flight System
The glider is designed to maintain stable flight by keeping the center of gravity (CG) aligned with the battery position. This ensures proper balance and smooth gliding.

### FPV System
- The FPV camera captures live video from the front of the glider
- The video signal is sent to the 5.8GHz video transmitter (VTX)
- The transmitter sends the signal wirelessly to a ground receiver
- The receiver displays the video in real time

### Control System
- The ESP32 acts as the main controller
- It manages connected components and can be extended for control logic
- Servos control flight surfaces (if implemented)

### Power System
- A 3.7V LiPo battery powers all components
- Power is distributed between the ESP32 and FPV system

This setup allows real-time first-person-view (FPV) flight while maintaining a simple and lightweight design.

Why I Made This

I grew up in a place affected by conflict, where drones were often associated with fear and destruction. Because of that, I wanted to explore a different side of this technology. This project is my way of learning how drones and aircraft can be used for creativity, education, and hobby projects instead of harm. I want to help show that flying technology can be something inspiring and positive.

 Features
- GPS-assisted navigation
- FPV camera for live monitoring
- Basic stabilized flight
  
Build Process
- Fuselage and wings modeled in Tinkercad.
- Battery will fit inside the fuselage (mid-section).
- FPV camera mounts at the nose.
- Servo wires run through small openings at wing roots and tail

Visuals

<img width="718" height="363" alt="image" src="https://github.com/user-attachments/assets/ff425880-926d-4c8a-8441-e00f2683233c" />
<img width="565" height="527" alt="image" src="https://github.com/user-attachments/assets/a32d151e-2ea2-4d90-812a-1874ee7ac4e6" />
<img width="716" height="241" alt="image" src="https://github.com/user-attachments/assets/2b922ae8-3807-4092-bb42-d1457642ea3c" />

Note: This is a digital 3D model of the FPV glider. Functional cut-outs for battery, camera, and servo wires will be added in the final physical build.

## Structural Reinforcement and Control Design
The aircraft is designed as a foam-based FPV glider, where most structural reinforcement is intentionally internal and therefore not fully visible in the external 3D mock-up. This reflects the real construction method used in foam and EPP gliders.
Internal Reinforcement
Primary structural strength is provided by internal wing and fuselage reinforcement, such as:
A longitudinal wing spar running through the wing at the point of highest bending load
Internal fuselage stiffening provided by foam thickness and localized reinforcement near the wing mount and electronics bay
Because these reinforcements are embedded inside the foam, they are not externally visible in the model. The CAD representation focuses on structural logic and placement, rather than exposing internal elements that would not be visible on the finished aircraft.
<img width="896" height="637" alt="image" src="https://github.com/user-attachments/assets/f1ca4dc4-0e06-4353-8a53-5ba57957d7ff" />

## Center of Gravity (CG)
A center of gravity reference is defined relative to the wing chord, located approximately at 25–35% of the wing chord from the leading edge, which is typical for stable glider and FPV aircraft configurations.
The CG position is determined by:
Battery placement (primary mass)
Flight controller and electronics location
Motor and propulsion system at the nose
The electronics layout shown in the model reflects deliberate mass distribution to ensure the aircraft balances correctly at the defined CG point.
<img width="740" height="345" alt="image" src="https://github.com/user-attachments/assets/02f1325e-a54d-4f8b-9451-4ff12ad4cad1" />

<img width="733" height="269" alt="image" src="https://github.com/user-attachments/assets/cfba7c4b-1938-481e-a2b7-a6205f14cd84" />

<img width="866" height="571" alt="image" src="https://github.com/user-attachments/assets/abcb256c-546b-4ad3-8dd0-ce3dfe685159" />
<img width="781" height="572" alt="image" src="https://github.com/user-attachments/assets/49d74784-3e51-4df5-966a-5d12645a4172" />

The internal layout is designed around the center of gravity (CG), which is marked in the diagram.

- Battery is placed at the CG to ensure stable flight
- ESP32 is mounted near the center to reduce imbalance
- FPV camera is placed in the nose for forward visibility
- Video transmitter is located at the rear to separate it from control electronics
- Antenna is routed outside the fuselage for better signal






<<img width="836" height="471" alt="image" src="https://github.com/user-attachments/assets/5135d8f5-1f24-471d-81a0-75f3b94a3a7a" />
 />

This flowchart shows the logic of the flight controller.
The system checks aircraft status before takeoff, monitors flight conditions,
and switches to emergency protocols if issues such as signal loss or low battery
are detected. The diagram represents conceptual system behavior rather than
exact hardware-level implementation.

Component Placement & Assembly Plan

The aircraft is based on a 120cm EPP glider airframe. Components are placed to maintain balance and easy access.

Fuselage (Front to Back)
- **FPV Camera**: Mounted in the nose using hot glue or foam-safe adhesive. The camera is angled slightly upward (~10°) for level flight visibility.
- **Battery (3S LiPo)**: Placed inside the nose section on a simple foam or plywood tray. Battery position is adjustable to achieve correct center of gravity.
- **Flight Controller (F4 V3 INAV)**: Mounted in the center of the fuselage using double-sided foam tape to reduce vibration.
- **GPS Module (Beitian M8N)**: Mounted on top of the fuselage or tail section using foam tape, away from electronics to reduce interference.

Wings
- **Servos (2x 12g metal gear)**: Installed into servo pockets cut into the wings. Secured using hot glue or foam-safe glue.
- **Control Rods**: Steel pushrods connect servos to control horns on ailerons and elevator.

Tail
- **Elevator & Rudder Horns**: Attached using screws or glue depending on foam thickness.

Motor & ESC
- **Motor (2204 1400KV)**: Mounted to a small plywood plate glued into the nose.
- **ESC (30A)**: Placed inside the fuselage behind the motor, secured with tape or zip ties for airflow.

Wiring Overview

- The **battery** connects to the ESC using XT30 connectors.
- The **ESC** powers the motor and provides 5V to the flight controller through the BEC.
- **Servos** plug directly into the flight controller servo outputs.
- The **radio receiver (FS-iA6)** connects to the flight controller using iBUS.
- The **GPS module** connects to the flight controller via UART (TX/RX).
- The **FPV camera** is powered from the flight controller and sends video to the FPV receiver.

All wiring is routed internally through the fuselage and wing root openings to keep cables protected.
<<img width="713" height="640" alt="image" src="https://github.com/user-attachments/assets/722a9b1c-577a-4be6-8803-9ea9f919b4ed" />
<img width="683" height="660" alt="image" src="https://github.com/user-attachments/assets/dedd1591-5f1c-44a0-b8ca-4cc5a34977cd" />
<img width="841" height="335" alt="image" src="https://github.com/user-attachments/assets/ba74d30b-e2b4-4555-afe5-a29f7fa6b35a" />


This diagram shows the complete wiring and signal flow of the long-range FPV glider.
The battery powers the ESC, which drives the motor and provides regulated 5V BEC
power to the INAV F4 flight controller. The flight controller receives control input
from the radio receiver and navigation data from the GPS module, and outputs control
signals to the servos for stabilized flight. The FPV camera provides live video for
monitoring during flight.
## Design Decisions

A standard flight controller (e.g. Betaflight / INAV) was not used as the primary system because it relies on prebuilt firmware.

Instead, a Raspberry Pi-based controller was implemented to allow full control over signal processing and flight behavior.


Bill of Materials (BOM)

This BOM lists the planned components for the build. Some parts may be substituted with equivalent alternatives depending on availability.

| Category | Part | Quantity | Price (GBP) | Source |
|--------|------|----------|-------------|----------|
| Airframe | LMI / FOX EPP Glider (120 cm) | 1 | £24.09|[Amazon](https://www.amazon.de/-/en/LMI-FOX-Wingspan-Airplane-Multi-Colour/dp/B07BN2BTTR)
| Airframe | UHU POR Foam Glue (50ml) | 1 | £5.99 |[Amazon](https://www.amazon.co.uk/UHU-quick-setting-special-adhesive-polystyrene/dp/B004GHJ9NW/ref=sr_1_8?crid=32BBKKD1SXG3J&dib=eyJ2IjoiMSJ9.EL2mvcCIHityr1ZB0a5nEsrpydYABIdQKJQVFVhoKO0KRHTozwqk3WQ96cDPv6CB9k9ohQjXTRg3Ab051c8MhLYgnJrjz9pvwcyVMly-RN3D_yD0pnwPmdn2cFCcE5tpBC03KV4in6ZoGdzJlQqqQBXg_8apIWSHoE-RZluNs6ia7vb_T7Szt0D0z3nOALn0YaUW1S2xSoJ31RylScsA_GJvaSfCRsuxvqxtyiq2AzM39MJ3zv4-axN4J1mY3B-I-uvmMw78Y3tsB2GXrFBv339xOUQ36tSIJNHKHBX6No8.tCrdFsK6RJ-cDP_zTOy6fwb79sv6GY9qjZjy4i3LaK8&dib_tag=se&keywords=foam+glue&qid=1765218723&sprefix=foam+glue,aps,156&sr=8-8)
| Airframe | Gorilla Tape 9m | 1 | £3.00 |[Amazon](https://www.amazon.co.uk/Gorilla-Glue-3044401-Duct-Black/dp/B001E5ZWT4/ref=sr_1_4?crid=2V2DWO2Q9R912&dib=eyJ2IjoiMSJ9.NfefpOPtqR5bVB9LyyEUbpuv482qHnvw8hnStatLbFkLWOo6x04GwypDk8NJU_e-65bHOXMwHCJqRv5_z-JNeYMi4tQ9ScGHaC3_f_r9IQWuWo0VpXVG2qxBQlSw6Q6WjUZKvq1y_58pW6xkoUpfvg6jRCZ--KRyrbVEESF3DT7amZR6MzpMQQFBkybf72_VdeGMvXhALEMvwFG80jKOtPcQMyaLzG-97dzYXudF_F8Cj89QEPKy_etxPGfMqfpFXYyJyU3GGuNpm3MM6j7a7ru3owncTZj4v3vVFxX3yZo.VfO4GaOK79cYSgHHQDBmC5tOpk7XGQFcU_x_Da5DeUo&dib_tag=se&keywords=Gorilla+Tape+Handy+Roll+Black&qid=1765232636&sprefix=gorilla+tape+handy+roll+black,aps,113&sr=8-4&th=1)
| Airframe | Bamboo Chopsticks (20cm) | 1 pack | £1.75 |[Amazon](https://www.amazon.co.uk/Obento-Disposables-Bamboo-Chopsticks-Pairs/dp/B00IFEJFB8/ref=sr_1_36?crid=39BDVYCUARCZC&dib=eyJ2IjoiMSJ9.Cbb79AZgCeui_5kC3IcqgFfgT0EXFRNqSo_EpKzRX7Dq5OAxkK49E1wD80_bNUSxhw3jyTOxpFCX94AA-aVrLWw5OYlZoMrhn1VZFPUx5bpeHTfZ2tNO43ChMXs9P4GeioU-jbOFZpW8ZIdFtPvyXw51bliJHGeVY9uSk_CC3HOE2eEDi6uRHhdqqptFhWmnvNbH_yKGIfdTpHQCYFRddeY7Zy0kOyOwvg6H7Vuhisa5mU_Byy9yNodDleWQcRA7Hu-_yvUiqaDeVCpaE1FDHYtFmPfjYfndaQFGGwBNOZc.L7mSNWcvFPi1dlC2fmkRe39bw-VN2eXqty_tWvEqb2E&dib_tag=se&keywords=Bamboo+Chopstick&qid=1773946522&refinements=p_36%3A-500&rnid=388997011&sprefix=bamboo+chopstick%2Caps%2C372&sr=8-36)
| Radio | FlySky FS-i6 + FS-iA6 RX | 1 | £57.99 |[Amazon](https://www.amazon.co.uk/Yangers-Transmitter-Receiver-Controller-Helicopter/dp/B0CK1TKFC3/ref=sr_1_10?dib=eyJ2IjoiMSJ9.WuTrhpgk0vqgYiTz3m884wj84b8jyDHKzdhuWeNS0f1L_UGtY0A9mvKyBlepsxlO9jNX8gQorT7x56uYlwJJBSGn5qa0G-UhRPfddOr99ekJ0liosfWMoAcM717WAyBA_-_jOzP1iIjuWsyxL-jVLKLy7Py0t6U-4wOxrfk9_2V-xgeQpg-PpkVjJKgDE7xrU3VzHHcVYpvhCyMDVNoWvsxY_sVA7C4LJLJFQXe3x9g5TpYoYgVm6L9XtYF0TWyFLqEvKEQjoiqZ2Odl4b1hVcLWl6FTFM2UzcJ06XSh-Hw.MDp5JuJT_K-2uAfBokSx0w9PDXcl_L5YCqRkZT0N4lU&dib_tag=se&keywords=FLYSKY+FS-i6X+6CH+2.4GHz+RC+Transmitter+Controller+with+FS-iA6B+Receiver+Upgrade+Cable+for+RC+Boat+Racing+Drone+%28Mode_2%29&qid=1773946307&sr=8-10)
| Motor | 2204 1400KV Brushless Motor | 1 | £12.99 |[Amazon](https://www.amazon.co.uk/DollaTek-Performance-Brushless-Airplane-Fixed-wing/dp/B08884C95Z?source=ps-sl-shoppingads-lpcontext&ref_=fplfs&psc=1&smid=A3SCFTIO8CSK1X)
| ESC | 30A BLHeli-S ESC | 1 | £9.09 |[Amazon](https://www.amazon.co.uk/Boaby-Brushless-Controller-Electronic-Helicopter/dp/B092DPHSXR/ref=sr_1_1_sspa?crid=20RSL9V1EX2PN&dib=eyJ2IjoiMSJ9.BtTgpf4zalK4Po76_FNv6qpcrZX0vlIpF3gBEbhVx7w-9e7366PohZH_tl1GOd5gEghFWbfzZRZYNADdf2YLD7QFosehdZtwaKZRwMk_E-sV0epdvySGRxOksw03GQTP7xpFhKJvX0OcJ6sGxrTOC-jpH8PHYKgkMhggUoDEOPFdf2Bi8FAe4RiiwmBJvIVHO7Pw0nJWpmOHnlfBIzlUY9DsKXb2O0Vi2XeddVu6FoNvbbGPOVOPCb1NnWrtN3vqXQgcQugX1TURCqH7GUfh3ilogD7IS9Ex8VHGxH3zOVY.KB35p0dQTCPjU6I8OcJTUX3wMNyu1Kyy5Mhq6aBiOH8&dib_tag=se&keywords=30A+BLHeli-S+ESC&qid=1765219500&refinements=p_36:-1700&rnid=389075011&sprefix=30a+blheli-s+esc,aps,115&sr=8-1-spons&aref=M2WXORvunP&sp_csd=d2lkZ2V0TmFtZT1zcF9hdGY&psc=1)
| Prop | sourcing map RC Plane Airplane Spinners|1|5.09|[Amazon](https://www.amazon.co.uk/sourcing-map-Propeller-Brushless-Controllers/dp/B0DL66CBC8/ref=sr_1_4?crid=33J6488M0NWBI&dib=eyJ2IjoiMSJ9.5IbsDkR6RGAqVOSbNcyqBryWwBpEpCtkawZiVLcT6vXJLpwTeBoY2FY3ev9t6hqlSXpbX5rMeJtNnxCwVtSiBmP3_MITOLMQCRCjLD7xIjBTsFwPLpJccXNEfDoCYrA2--tWB-sG2dZ_nlOBSO1jiyIpqnmlTy5j3TdagvUd517jRroGpgkPJUgTytZwldbA6yZ49ZjQIDK3aby-HXbylFEqsxhYRlpM09x8qNiUuh0es3oep6G0F1lubgi88Y8vj280FpcN4BvSVtJ1RTLDZ9WAe1NVx5NTgZtr2IUuEXA.p247Fy-FUXq5EImLpVuQq-HsYvW0id3uEoC1_uRMtS4&dib_tag=se&keywords=prop+adapter&qid=1765309091&sprefix=prop+adapter,aps,143&sr=8-4&th=1)
| Prop | Master Airscrew 8x4 | 1 | £6.19 |[Amazon](https://www.amazon.co.uk/Master-Airscrew-Electric-Propeller-MAS0840NE/dp/B0006O93SK/ref=sr_1_2_sspa?crid=164KJATF3Y8D8&dib=eyJ2IjoiMSJ9.8y5c5vWuJ6Kiopo1fPuV995N198q-CDZJ-d6EzUIiY2zG-rQKGthmW61x_3d2nmdZZ5bacITOZaxiLROWZJ3Zzyr5jNHfWFLKnNKRYikDp7zmFNKrL1eibq29AwO44qwKA5Zx1WTkeT4D89Cww6XnPOCPj5aP6bmMX2chQ_yvJTMnjcWsM5pIlVKONNaqwicH0_L4YbNHwN2p_0fPBs7WLOMUfHQiH5d2prGPAdLb7U-uEGbNbA9qS7bbp3k56wm6k4QYh9QyTcZhJs2LY3jgKrOTF6vfS5fYEx--OjbVf8.3mAIfR29zBPU4OdzUpxJK8kEZSx2Cp6nrBNJ1mYPe5M&dib_tag=se&keywords=Master+Airscrew+8×4+Propeller&qid=1765233511&refinements=p_36:-1000&rnid=389075011&sprefix=master+airscrew+8+4+propeller,aps,128&sr=8-2-spons&aref=MxQQu9zkW5&sp_csd=d2lkZ2V0TmFtZT1zcF9hdGY&th=1)
| Battery | 3S 3300mAh LiPo | 1 | £33.99 | [Amazon](https://www.amazon.co.uk/HRB-3300mAh-Battery-Airplane-Helicopter/dp/B073F94SPL/ref=sr_1_1_sspa?crid=3QULR3KSF8XIC&dib=eyJ2IjoiMSJ9.R1842_j7c0wlDToaWZkYZn2M3l3ybRVvsO0s8sRrNtkS1umMG5lvSAAOUfFFqhPqk7TTmfh71UdG5Cvqs8M2jNazuZfFO725DK0KofCm6UN2GTng_ptMOyXMqNyhXMW2YgWw3e-jVbyiY3hMvdzIpIe40lAWzaYthHu0yuGKBEdXK8tMWRw0h9qdhYbKdFP1C2yjsKk9WI4hLnieB5EM2N2xdi3wPsf1yXy_W0zV9Fhey7yT7rjFZZXy2sF7ugMlcXPq306IcKxYRuT-SoyWwUu-G0OO1z6jfKu1bO8mxLk.7asMawIJNiEtUGWBOVk6Hy71hnR6KAyDdVt_OQeAaL4&dib_tag=se&keywords=HRB+3S+LiPo+4500mAh+60C&qid=1765231793&s=kids&sprefix=hrb+3s+lipo+4500mah+60c,toys,72&sr=1-1-spons&aref=afS2ttk7HI&sp_csd=d2lkZ2V0TmFtZT1zcF9hdGY&psc=1)
| Charger | ISDT Mini LiPo Charger | 1 | £12.99 |[Amazon](https://www.amazon.co.uk/ISDT-Balance-Charger-Portable-Batteries-Black/dp/B0B283T6YV/ref=sr_1_1_sspa?crid=UAE59MPNEN8J&dib=eyJ2IjoiMSJ9.T4Mb7A5Hmp1HVK4kUYXtD7NqXiUd3nHE-C6srITnW39q3iZpz-2wqo6s32wBgnITzitI2w3FpIHtLp4t_CcQuWpB_T8zzroAfAmC78HOezgVld6vB6et5PyGEfQk5-EyCcS3_4ao4gUPebAKfcUXkxlHlte5LWONHY_qTGoa_Q0kOGNda1HIiHwfPFcpU4gGqTq9txacox1RKbBc3JMDfozy0WFJkJyf6WeiO7Yy2M0eDDQexkhgaNubvIemPHmJZYAAWhGTGRajD93gubo8IuciHaJl2x5e0RyepIgh-QU.ndCU4BWhjz3N0Q5P_EpGPdhoWk-gX9K7XhJx4miQclU&dib_tag=se&keywords=LiPo+Charger+ISDT&qid=1765219773&s=kids&sprefix=lipo+charger+isdt,toys,145&sr=1-1-spons&aref=lcAIow8u70&sp_csd=d2lkZ2V0TmFtZT1zcF9hdGY&psc=1)
| Connectors | XT30 Connector Pairs | 2 |£6.29|[Amazon](https://www.amazon.co.uk/ikarex-shop-Silicone-Connection-Connector-Tin-Plated/dp/B0CDV3XHPX/ref=sr_1_6?crid=1XY4XV0PB9LJN&dib=eyJ2IjoiMSJ9.3FhGyWjVtFVSLuH78mXcFjCdAXdgKJ1Gi3sRAvxRi3P6CrD3Amd_MbhMf26uc8Qa3ojrfB2zT1nL5nTzzUcRfTla6Mz9-hWzOi-JXqwFE04hNYGtiGyID_M9RDiFBP7EtHxMwvHZj4g772E4JEf2hi_f4CgmpxqxRS184NNWSf7XepyN8dehNklHxY99BI1kiubTM3G3LWq3ItR55O-rEfL9WAbnugA8E3kqCJ15IQ94c8AsjckRYVYcPXLDwbuLauSgLcBcJvTZvgmR9607pf0M4aK0zq5zGn2Mkg27DU4.4AqECSN9Fz2GsdeGWH0GlsgbPr5o-FSmgWZn5evmRhY&dib_tag=se&keywords=XT30+connectors+wires+(4+pairs&qid=1765233795&refinements=p_36:600-800&rnid=389075011&s=kids&sprefix=xt30+connectors+wires+4+pairs,toys,67&sr=1-6 )
| insulation|Insulation → Battery insulation material|1|£2.09|[Amazon](https://www.amazon.co.uk/Battery-Shrink-Tubing-Black-Insulation/dp/B0DKBMV9FB/ref=sr_1_18_hul_core?ie=UTF8&keywords=Battery+straps+++heat+shrink&ASIN=B0DKBMV9FB&sprefix=battery+straps+++heat+shrink,aps,106&s=bazaar&sr=8-18&crid=3S84QRN4LBI8R&qid=1765233975&dib=eyJ2IjoiMSJ9.A8P6MsgfHasIpsGXJQ83mc5Bj80AEJpkSoKl5_Uhx4RWewcr4RaTgIFvWTvVB8Ul3DJ1SvPRkwFASbMnGWiRJvaacGQLLdxLMoibEYXYcQXXxZsAZSWSSaF3XTB5Jg076xDHA8p6KqR0De1r4_UhtSZeMU13kh6v2nlZtmYSVl6pfuvas74y9u3y2S3wzTYRw4nmTiLYW7SBsGxG3xfo2T3inP-0j9J9oQg6uz-RQTxJ4z5foTKgYwIBJMlD1-ni3njngbtEmgkC6wNuekJHp050ChUhBi8sWUdrJe6Ppaw.10NcL0yHyuSO9h8NgP2-y8uPRNS3ld8HDcVK5inZ4L4&dib_tag=se)
| FC | F4 V3 INAV Flight Controller | 1 | £15.92 | [Amazon](https://www.amazon.co.uk/PAMENET-Betaflight-Controller-Barometer-Quadcopter-Black/dp/B0D1VC8QTF/ref=sr_1_1?crid=3TX4XDH4NV9VQ&dib=eyJ2IjoiMSJ9.voTeGCfuQh0Kn2pOCRVT_cRxBQ7ctBZRtnlVh8TJytJzh1de8dnCobky3Q4P4_Xz6fL1rlm9foBhRPaLcTzWcV0kGDEHtD2H3M2GUE7QxNoxp7HWQMwOp-jtpBNcdrtpRg_YZmrhhXbNk0a3227Tl1gpJZdFGT_JIJoD6LR7EhT6gEGWw3VHWAbQ0Embf9VhLqZTxfjahYOajaw3VbnsZYIaHRe7LDFCIdny0sn0Z3TCKOqYdtA7-_2zUd7pbUjg0Ek3Y2uU7u5SeAGIXrcFYx5qL6NPARY3ug0mUEdQGy8.Hn2I1pohWzmAD0vHT1IvBdgnjBrKylG0zqSXE4zp1EI&dib_tag=se&keywords=F4+V3+INAV+Flight+Controller&qid=1773947274&sprefix=f4+v3+inav+flight+controller%2Caps%2C283&sr=8-1)
| GPS | Beitian BE220 M8N | 1 | £15.85  | [Amazon](https://www.amazon.co.uk/Protocol-Positioning-Suitable-Fixed-Wing-Crossing/dp/B0CZRS52RZ/ref=sr_1_1?crid=3CH4Z7WTK5EX7&dib=eyJ2IjoiMSJ9.4k2f6wn9r9y04a74wvQbYDoUMwIPgI3TTz0izEN78aGkrxndvIucQPHWqLRr8a6GWVKQ4S9a3PUE0ZoA8-DYihvQDJ54A0risegO2mjVBzYsjyzK0GiM-QRHuSGskYM7nshNWHEAMkcyw0iOEvCRIrS-613BThbHdIzv2XMwCu9VZLKoxw-h4F7n3exs8LIgeKrqRbmv8IOXcgmdIgT-g0kT9APG4iM1cjciY9q-rAq6kDVg_c4pRnm1s8PSFGi84zjcHz3XPgFZGRPROhF-c-j6orEZ66YIWlBX97if164.bU7iB8Rn071PwGXNwO-cdJrRbwI5bvOGirbd_GMPZ3I&dib_tag=se&keywords=SoloGood+2PCs+Beitian+BE220+M8N+GPS+Module%2C+Supports+GPS+GLONASS+BeiDou+for+RC+Long+Range+FPV+Racing+Drone+Airplane&qid=1773947679&s=electronics&sprefix=sologood+2pcs+beitian+be220+m8n+gps+module+supports+gps+glonass+beidou+for+rc+long+range+fpv+racing+drone+airplane%2Celectronics%2C272&sr=1-1)
| FPV | AIO FPV Camera (800TVL, integrated video transmitter) | 1 | £37.51 |[Amazon](https://www.amazon.co.uk/Camera-800TVL-NTSC-Switchable-Drones/dp/B0C537CT2R/ref=sr_1_4?crid=1TNN913MI2LM8&dib=eyJ2IjoiMSJ9.vYVDEtwnAAX4LVodvu5xP2JVCnILN__YSgZ9iaVUZL1DCmMMc0VLSkdeFqPSv1jSjhzybE8DMEeKtfog1qEktDhL44gkrvsRd0mFlmQYNXIpTzUn0BefTtSR_Um9amk_iICOLJ8MFgWjpZvBUyiC0OHKA0_PPrphBKwBsRlMyuyyg41rX8JFpF4Rrbj1fSKBCbCagqYNqfoZTMyLVUNZiQZG0OG5ykBDfQNy0isr5un-7pyEBq7-SfsmnpH5cKYbHwxWeT_sQxeWjXB37TTJxPOAUaLcbuuIp8c45sMcS-Q.oVNwAYTG955NbxTxKzyBpH7Ypotd_bshxGWabcmrcMA&dib_tag=se&keywords=AIO+FPV+Camera+800+TVL&qid=1765234863&sprefix=aio+fpv+camera+800+tvl,aps,151&sr=8-4)
| FPV | 5.8GHz FPV Receiver | 1 | £17.15 |[Amazon](https://www.amazon.co.uk/Misamo-Wireless-Receiver-Multicopter-Quadcopter/dp/B0CX3XCH74/ref=sr_1_7?crid=4QYONWQ07IJJ&dib=eyJ2IjoiMSJ9.m2iKmLh3twFscsNxdAX4HyVHcSHQ1JSQXnSOAhIP1xse9JjRLBAogd4KhHT0BIt0tN14nfVZr5iJi5UynLivaL3B-S8Xe9mx1nG1BC5gLVZEu3m_DYbw-h5wCmzc-HMaPUmOkyHfFVNad6sKePKtd3cOEIjGur2049O8h1BGQcQ4sMdrtcDe7J1Dua6GuVAjknAglqWcTJY0zUwZ8C-Ux-gDtZucaN6x-4IRELGc6bvhpOGjneG6K-YTN5oSyqfd4XFbs_Ot72V1kNjRJ0ydzH0zqAfw4EAUZ_6r2aW6Zqw.-jP6U4IP0VRDgy7CL2oS1gn_Jf2U6o4PTzpuYE3SrIU&dib_tag=se&keywords=RC832H+5.8GHz+48CH+FPV+Receiver&qid=1765231739&sprefix=rc832h+5.8ghz+48ch+fpv+receiver,aps,101&sr=8-7#)
| Servos | 12g Metal Gear Servos | 2 | £12.38 |[Amazon](https://www.amazon.co.uk/Aolidsive-ES08MA-Analog-Torque-Drones/dp/B0GPWBB4S8/ref=sr_1_8?crid=1918IWLV4QRK6&dib=eyJ2IjoiMSJ9.4eiQHKDBxaEijhjU-zRrNSgYurkeMTrzWJPUYT3PeUx30QfhN1u08uppgXbNQmyt4xPeFflmWW9-gZxf1yODl5FacRH2mIpfZ7DD1Bj-MyI4pq7Yek-yiewuxzkDIw8my9qt-6YM4aH51BnnOgIQOn9yCxSPcN6DJNr0mcGfA1mhUL_hH_JVvAy7_6k_0xOIimaNpXLpBSL_23eEuGqktHNmvYSwh_DD20X9fymyAGCOYUFy5tsuaAwXET3bNesfHwTHXxmbPt0guUrEY0o-knwCPO0rS7sGzJCJqVn15j0.W76jQi67b4TiwbMJ4m9QPcK_AWeWa3e525AtDRI0oHY&dib_tag=se&keywords=HAWK%27S+WORK+EMAX+ES08MA+II+Micro+Servo%2C+12g+Metal+Geared+Analog+Servo+for+RC+Models&qid=1773957290&refinements=p_36%3A146171031&rnid=389075011&s=kids&sprefix=hawk%27s+work+emax+es08ma+ii+micro+servo+12g+metal+geared+analog+servo+for+rc+models%2Ctoys%2C290&sr=1-8)
|Hardware | RC Airplane Control Horns 20x11mm + 1.2x21mm Clevis + Pushrod Connector + Linkage Stopper 1.3mm + 1.2x180mm Steel Z Style Pushrods | 1 set | £0.77 |[Amazon](https://www.aliexpress.com/item/1005004399398255.html?spm=a2g0o.productlist.main.4.4ced71rD71rD2P&algo_pvid=df0f6e1e-05f2-4d1a-89c5-3c5c5eb7a792&algo_exp_id=df0f6e1e-05f2-4d1a-89c5-3c5c5eb7a792-3&pdp_ext_f=%7B%22order%22%3A%22681%22%2C%22eval%22%3A%221%22%2C%22fromPage%22%3A%22search%22%7D&pdp_npi=6%40dis%21GBP%213.65%210.76%21%21%214.75%210.99%21%4021038e1e17655702414981613ebc07%2112000029040160290%21sea%21UK%210%21ABX%211%210%21n_tag%3A-29910%3Bd%3Ae47e3627%3Bm03_new_user%3A-29895%3BpisId%3A5000000187461876&curPageLogUid=ndKcekkmhlmz&utparam-url=scene%3Asearch%7Cquery_from%3A%7Cx_object_id%3A1005004399398255%7C_p_origin_prod%3A)
|Hardware|Raspberry Pi 3rd Generation |1|￡3.99|[aliexpress](https://www.aliexpress.com/item/1005005871122070.html?UTABTest=aliabtest125094_24785&src=google&src=google&albch=shopping&acnt=494-037-6276&slnk=&plac=&mtctp=&albbt=Google_7_shopping&gclsrc=aw.ds&albagn=888888&ds_e_adid=&ds_e_matchtype=&ds_e_device=c&ds_e_network=x&ds_e_product_group_id=&ds_e_product_id=en1005005871122070&ds_e_product_merchant_id=776850999&ds_e_product_country=GB&ds_e_product_language=en&ds_e_product_channel=online&ds_e_product_store_id=&ds_url_v=2&albcp=17859500389&albag=&isSmbAutoCall=false&needSmbHouyi=false&gad_source=1&gad_campaignid=17190468917&gbraid=0AAAAADznYb_1lfexwQTarJwZBvQ_wGPdl&gclid=Cj0KCQjwj47OBhCmARIsAF5wUEE54t1vBj6H7GxlPM87eZ4aCGhRrzxUGb5fxPJamk7UD_infdsoPwYaAlWjEALw_wcB&aff_fcid=43586eb8bee94ab89e687450b311e164-1774482462466-02018-irey5Th&aff_fsk=irey5Th&aff_platform=promotion&sk=irey5Th&aff_trace_key=43586eb8bee94ab89e687450b311e164-1774482462466-02018-irey5Th&terminal_id=104e0389bed649eda5304ec4638a1262&OLP=1116833308_f_group2&o_s_id=1116833308&afSmartRedirect=n)
|Hardware|MICRODIA XTRA microSDHC Card (32, GB)|1|5,99|[amazon](https://www.amazon.co.uk/MICRODIA-XTRA-microSDHC-Card-GB/dp/B0CQB3DBJR/ref=asc_df_B0CQB3DBJR?mcid=afa2baed503b3d9f8a00e8eed7f0cbdc&tag=googshopuk-21&linkCode=df0&hvadid=701726414045&hvpos=&hvnetw=g&hvrand=11098853756855754026&hvpone=&hvptwo=&hvqmt=&hvdev=c&hvdvcmdl=&hvlocint=&hvlocphy=9044975&hvtargid=pla-2355798706766&hvocijid=11098853756855754026-B0CQB3DBJR-&hvexpln=0&gad_source=1&th=1)

| **Total** |  |  | **£291.10** |  |


**Airframe Availability Update**
**Date:** 8 March 2026

As of **8 March 2026**, the original foam glider airframe used for this project is no longer available for purchase from the previously listed source. The system is designed specifically around a glider-style airframe, so it cannot be adapted to a different type of body (for example, a drone frame or a standard RC airplane fuselage). A glider platform is required for the project.

To keep the project buildable, several alternative foam gliders have been listed in this README. These alternatives are not exact matches to the original airframe and may differ in internal space and overall dimensions.

Most currently available alternatives are **smaller than the original design**, which means the internal space may be tighter and some adjustments to component placement might be required depending on the specific glider used. While these alternatives are not ideal due to their smaller size, they still provide a workable platform and are currently the closest available options for building and testing the project. [amazon](https://www.amazon.co.uk/Garneck-Airplane-Throwing-Material-Activity/dp/B0DXZ3LCSC/ref=sr_1_24_sspa?dib=eyJ2IjoiMSJ9.SYmsii3TBNe-w2hhtsPWFfTldLd6M3iIKr3ncLoA18tQrSZbvDgHBmf-qTFnU7effLAE_3ndqa6ByIhVkuvyUu0oJ1drE-Kls8CzZjmL2DtwbdSoRFNjg2G8SX0v-vbIiCMcFd3JLfRbxer8iWzFNFmZC4YioeCBorVdefZEg5tswJnZ6dea8AieUjdOWbSt1SQvJWU3B4o-44cb4-PinJ_ouDLY1oWKZjC9aIOTIUKQ9nELw5s_0ofVa6Ap5NEumZvK7Bb7gLCA20etoF6EcjXKfc2YcY1_m3aKj-_wQ-s.0-lJN_P-OPF45l8S5tvpWkFV05sdlCDQjF5HS-JS-r0&dib_tag=se&keywords=giant+foam+glider+plane&qid=1773000650&sr=8-24-spons&aref=4hJXS0NEM6&sp_csd=d2lkZ2V0TmFtZT1zcF9tdGY&psc=1)
## Airframe Design

The base glider structure is modified to support onboard electronics:

- Custom mounting system for Raspberry Pi
- Center of gravity adjusted for added weight
- Reinforced fuselage for structural stability
- Internal layout redesigned for wiring and airflow

As a result, small adjustments to component placement (especially battery position for center of gravity) may be required when using alternative airframes.

# FPV Glider with Custom Flight Control System

## Overview
This project is a custom-built FPV (First Person View) glider that introduces a redesigned control architecture. Instead of directly connecting the radio receiver to the servos, a Raspberry Pi is used as a programmable flight controller to process and manage all control signals.

## Key Features
- Custom flight controller implemented using Raspberry Pi
- Software-based signal processing between receiver and servos
- Fail-safe system for signal loss
- Modular FPV video system
- Modified airframe for improved balance and electronics integration

## System Architecture
Controller → Receiver → Raspberry Pi → Servo Outputs → Control Surfaces

## Engineering Design
Unlike traditional RC systems, this project introduces a control layer where all signals are interpreted and processed in software. This allows:
- Custom control logic
- Signal filtering and smoothing
- Expandability (autonomy, stabilization, telemetry)

## Hardware Components
- Raspberry Pi (flight controller)
- Micro SD Card (OS + software)
- RC Receiver (PWM or UART output)
- Servos (control surfaces)
- ESC + Brushless motor
- FPV camera + video transmitter
- Battery (shared system power)

## Software
- Raspberry Pi OS Lite
- Python-based control system
- GPIO / PWM signal handling

## Airframe Design
The glider body is modified to:
- Integrate onboard computing hardware
- Maintain correct center of gravity
- Support modular electronics mounting

## Future Improvements
- Gyroscope stabilization
- GPS navigation
- Autonomous flight modes
- Telemetry system
## Control Logic

The Raspberry Pi reads PWM signals from the receiver and converts them into control commands.

- Input: PWM signals from receiver (throttle, pitch, roll)
- Processing:
  - signal normalization
  - safety limits
  - fail-safe detection
- Output:
  - PWM signals sent to servos

Example:
- If signal is lost → set elevator slightly up (glide mode)
- Limit servo movement to prevent mechanical damage

