
#ifndef BOARD_PICO_H_
#define BOARD_PICO_H_

#define PROBE_IO_RAW
#define PROBE_CDC_UART

// PIO config
#define PROBE_SM 0
#define PROBE_PIN_OFFSET 2
#define PROBE_PIN_SWCLK (PROBE_PIN_OFFSET + 0) // 2
#define PROBE_PIN_SWDIO (PROBE_PIN_OFFSET + 1) // 3
// Target reset config
#if false
#define PROBE_PIN_RESET 1
#endif

// UART config
#define PROBE_UART_TX 0
#define PROBE_UART_RX 1
#define PROBE_UART_INTERFACE uart0
#define PROBE_UART_BAUDRATE 115200

#define PROBE_USB_CONNECTED_LED 4

#define PROBE_PRODUCT_STRING "Misha Dev RP2040 with debugger"

#endif
