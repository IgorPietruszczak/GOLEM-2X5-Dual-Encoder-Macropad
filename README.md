# 🎮 GOLEM 2x5 Dual Encoder Macropad

![License](https://img.shields.io/badge/license-MIT-blue.svg)
![QMK](https://img.shields.io/badge/firmware-QMK-red.svg)
![KiCad](https://img.shields.io/badge/PCB-KiCad-blue.svg)
![3D Printed](https://img.shields.io/badge/case-3D%20Printed-orange.svg)

An open-source 2x5 macropad featuring **dual rotary encoders**, a custom PCB, and fully 3D-printed case.

<img width="6000" height="4000" alt="IMG_0709" src="https://github.com/user-attachments/assets/2e2ca8b4-4da9-4d84-8826-484afe1a793c" />

---

## ✨ Features

- **2×5 key grid** — 10 programmable keys
- **Dual rotary encoders** — for volume, scrolling, zoom, or any custom action
- **Pro Micro** microcontroller (ATmega32U4)
- **QMK firmware** — customizable layers, macros, and encoder mappings
- **Custom KiCad PCB** — open-source design files included
- **3D-printed case** — print-ready STL files included
- **MIT licensed** — free to use, modify, and share

<img width="6000" height="4000" alt="IMG_0710" src="https://github.com/user-attachments/assets/a715bd72-379e-48ac-9bd2-7b35c2f2d204" />

---

## 📁 Repository Structure

```
GOLEM-2X5-Dual-Encoder-Macropad/
├── 3D Parts/                           # STL files for the case and knobs
├── Design Files For 3D Parts/          # KiCad schematics and PCB layout
├── PCB Design & Production files/      # Supporting design assets
├── QMK Keyboard Layout/                # QMK firmware source
├── LICENSE
└── README.md
```

<img width="6000" height="4000" alt="IMG_0711" src="https://github.com/user-attachments/assets/a1ceb0ce-5801-41b9-8b91-69e22ffb1be3" />

---

## 🛒 Bill of Materials (BOM)

| Part | Quantity | Notes |
|------|----------|-------|
| Pro Micro (ATmega32U4) | 1 | USB-C version recommended |
| Rotary Encoder (EC11) | 2 | With push-button |
| Encoder Knobs | 2 | STL included, or use off-the-shelf |
| MX-compatible switches | 10 | 3-pin |
| 1N4148 Diodes | 10 | Through-hole |
| Keycaps | 10 | MX compatible |
| M2 screws 5mm & heat inserts | — | For case assembly |
| Custom PCB | 1 | Gerber files in `PCB Design & Production files/` |
| 3D-printed case | 1 set | STL files in `3D Parts/` |
| Silicone anti-slip pads | 4 | Placed in the corners on the bottom of the case |
| Tact Switch | 1 | For easy enabling of boot mode |

<img width="6000" height="4000" alt="IMG_0714" src="https://github.com/user-attachments/assets/714d90d5-c3a1-4334-b6c5-e241493763db" />

---

## 🖨️ 3D Printing

All STL files are located in the `3D Parts/` folder.

**Recommended settings:**
- Layer height: **0.2 mm**
- Infill: **15%**
- Supports: **No** (parts are designed to print without supports)
- Material: **PLA or PETG**

**Parts to print:**
- `Case_bottom.3mf` — Main keyboard body × 1
- `Encoder_Support.3mf` — Support to prevent bending the PCB while pressing the encoder button × 1
- `Knob_Edit_105_scaled.stl` — Knob for the standard rotary encoder × 2
- `PCB_Cover.stl` — Top PCB cover × 1

> The encoder knob model is adapted from [this Thingiverse design](https://www.thingiverse.com/thing:4206617/) — scaled up 5% to better fit EC11 encoders.

---

## 🔌 PCB & Wiring

PCB design files (KiCad) are located in the `PCB Design & Production files/` folder.
Ready Gerber files are located in the **production** folder.
Order PCB boards from the PCB manufacturer of your choosing.

**To open the project:**
1. Install [KiCad](https://www.kicad.org/) (version 7.0 or later recommended)
2. Open `Design_Files/*.kicad_pro`
3. Review the schematic

> KiCad component library courtesy of [@joe_scotto](https://www.youtube.com/@joe_scotto/featured) — this project is heavily inspired by this creator.

---

## 🔧 Assembly Guide

1. **Solder diodes to PCB** — Pay attention to soldering them with the correct polarity. Check the KiCad project or PCB 3D model for reference.
2. **Solder Pro Micro to PCB** — The project is designed to use the pin arrays that come with the microcontroller. Check the PCB 3D model for reference.
3. **Solder tact switch to PCB.**
4. **Place MX switches into holes on PCB Cover 3D print** — Pay attention to placing them in the correct orientation.
5. **Solder MX switches to PCB** — After this step the PCB cover is unremovable, so be sure to complete all prior steps correctly.
6. **Solder 2 rotary encoders to PCB** — Make sure they sit flat and stable before soldering.
7. **Insert heat inserts into designated places on Bottom Cover.**
8. **Screw PCB to bottom cover with M2 screws.**
9. **Place keycaps on MX switches and knobs on rotary encoders.**
10. **Stick silicone pads to the bottom of the Bottom Cover.**

---

## ⚡ Firmware Setup (QMK)

This keyboard uses QMK firmware. Here are some tutorials on how to set up the keyboard layout:

- [Tutorial 1](https://www.youtube.com/watch?v=fuBJbdCFF0Q&t=241s)
- [Tutorial 2](https://www.youtube.com/watch?v=hjml-K-pV4E&t=1155s)

### Quick Setup

1. **Install QMK Firmware** — QMK MSYS, QMK Toolbox, drivers, etc.
2. **Move the keyboard layout** from `QMK Keyboard Layout/` to your keyboards folder in QMK.
3. **Flash the GOLEM 2x5 keyboard layout using QMK Toolbox** — Enable flash mode using the tact switch on the keyboard.
4. **Edit the keyboard layout (optional)** — Open `golem_2x5_dualencoder_macropad/` in a text editor and edit the keyboard settings.

---

## 🤝 Contributing

Contributions are welcome! Feel free to:
- Open an **Issue** for bugs or suggestions
- Submit a **Pull Request** with improvements
- Share your build photos — I'd love to see them!

---

## 📄 License

This project is licensed under the **MIT License** — see the [LICENSE](LICENSE) file for details.

---

## 🙏 Credits

- Encoder knob 3D model by [Thingiverse user](https://www.thingiverse.com/thing:4206617/)
- KiCad component library by [@joe_scotto](https://www.youtube.com/@joe_scotto/featured)
