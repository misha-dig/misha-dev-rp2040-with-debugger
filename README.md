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
* [Debugprobe](https://github.com/raspberrypi/debugprobe) (but I take portion source of code for only configuration of debugprobe due licensing complex and restriction of modification). I will planed to replace CMSIS-DAP software and hardware that support full open-source license and save BOM cost. Configuration CMSIS-DAP is licensed MIT, e.g. [board_pico_config.h](https://github.com/raspberrypi/debugprobe/blob/master/include/board_pico_config.h)

* [Raspberry Pi Documentation](https://www.raspberrypi.com/documentation/microcontrollers/) (Included: Hardware design with RP2040 and Getting started with RP2040)

* [Raspberry Pi Pico Datasheet](https://datasheets.raspberrypi.com/pico/pico-datasheet.pdf)

* [Getting started with Raspberry Pi
Pico-series](https://datasheets.raspberrypi.com/pico/getting-started-with-pico.pdf)

* [Raspberry Pi Licence Information](https://datasheets.raspberrypi.com/licence.html)

* [Licensing](https://www.raspberrypi.com/licensing/)

* [The design is based rp2040/Minimal-KiCAD.zip](https://datasheets.raspberrypi.com/rp2040/Minimal-KiCAD.zip) (Use downloaded circuits with mapping debugging and serial ports between two RP2040 MCUs)

* Thanks for developing excellent RP2040 MCU to Raspberry Pi that can develop software and hardware opensource!

# What I want to ask  

* Good luck with building your development board with debugger.
* I happy that help to solve problems

# Disclaimer and license

* PCB and sechmatics design are licensed licensed under CC BY-NC-ND 4.0. (C) Misha Zaslavskis

DESIGNS ARE PROVIDED “AS IS” AND THE AUTHOR DISCLAIMS ALL WARRANTIES WITH REGARD TO THESE DESIGNS INCLUDING ALL IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS. IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR ANY SPECIAL, DIRECT, INDIRECT, OR CONSEQUENTIAL DAMAGES OR ANY DAMAGES WHATSOEVER RESULTING FROM LOSS OF USE, DATA OR PROFITS, WHETHER IN AN ACTION OF CONTRACT, NEGLIGENCE OR OTHER TORTIOUS ACTION, ARISING OUT OF OR IN CONNECTION WITH THE USE OR PERFORMANCE OF THESE DESIGNS.

* Software (configuration of debugprobe) are licensed under MIT. (C) 2023 Raspberry Pi (Trading) Ltd.

THE SOFTWARE IS PROVIDED “AS IS”, WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.

* Software (testing API for this board) are licensed under BSD 3-Clause License. (C) Misha Zaslavskis

THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE
FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
