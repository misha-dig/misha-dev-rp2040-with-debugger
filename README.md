# misha-dev-rp2040-with-debugger
A compact-sized development board with two switchable debugger modes (BOOTSEL and SWD (debug/flash)) powered by a type-C receptacle connector.

# Description project
Single board with dual methods of uploading firmware into MCU RP2040 and not longer need to use Raspberry Pi debug probe, if use this board. 

# Requirement
Install and configure Raspberry Pi debug probe code, you can download from links https://github.com/raspberrypi/debugprobe
Will provided only board_pico_config.h in software directory. You will need to replace file from orginal file.

To install required lastest version of Raspberry Pi Pico SDK. Recommended version PICO SDK is above 2.0.0

# Testing SWD flashing and UART

Will provide binaries and instruction later.

# Technical specification
- Two RP2040 MCU (one for main functions of development board and one for debugger)
- USB Type-C connector receptacle (Best solution that not require to find uncommon USB cables)
- Normal input voltage from USB is 5.0 V, but absolute range is (4.5 - 5.5 VDC). This development board can power only USB cable as first prototyping. Unfortunately, don't allow to use external power source even 5V in current time. Use it is risk to damage your board. 
- Maximum output recommend current is 250mA for 3.3 voltage regulation, but 500mA is absolute maximum current in both output voltage 3.3V and 5.0V to avoid excessing heating voltage regulator due solder paste has melting point 138 C. 
- MCU clock 133 MHz
- RAM 264 kB.
- Flash memory size 16 - 128 Mbit, depending in your prototyping. Use Winbond flash memory series W25QxxxJVxxx as Raspberry Pi recommendation for RP2040 MCU. Required external flash memory each RP2040 in both MCUs. 

# Credit
* [Debugprobe](https://github.com/raspberrypi/debugprobe) (I take some portion of code, but current I used for configuration of debugprobe)

* [Raspberry Pi Documentation](https://www.raspberrypi.com/documentation/microcontrollers/) (Included: Hardware design with RP2040 and Getting started with RP2040)

* [Raspberry Pi Pico Datasheet](https://datasheets.raspberrypi.com/pico/pico-datasheet.pdf)

* [Getting started with Raspberry Pi
Pico-series](https://datasheets.raspberrypi.com/pico/getting-started-with-pico.pdf)

* [Raspberry Pi Licence Information] (https://datasheets.raspberrypi.com/licence.html)

* [Licensing](https://www.raspberrypi.com/licensing/)

* Thanks for developing excellent RP2040 MCU to Raspberry Pi that can develop software and hardware opensource!

# What I want to ask  

* Good luck with building your development board with debugger.
* I happy that help to solve problems

# Disclaimer and license

* PCB and sechmatics design are licensed licensed under CC BY-NC-ND 4.0. (C) Misha Zaslavskis

* Software (including configuration and testing) are licensed under MIT. (C) Misha Zaslavskis
