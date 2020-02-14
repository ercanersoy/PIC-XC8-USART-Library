# PIC MPLABX USART Library

Copyright (C) 2020 Ercan Ersoy

This USART library is useful for USART data communications.

This USART library licensed by CC0-1.0 Universal License.

## Usage

_XTAL_FREQ must be defined at "USART.h" header file.

### void USART_calculate_baud(const unsigned long int baudrate)

Calculate and set USART baud rate.

### void USART_send(const char data)

Send a character from USART.

### unsigned char USART_TSR_control(void)

Get USART TSR control

### void USART_print(const char *string)

Send a string from USART.

### unsigned char USART_read_available(void)

Get data is availabile from USART.

### void lcd_print(const char *s)

Print a string on screen.

### char USART_read(void)

Read a character from USART.

## Note

MPLAB is a registered trademark of Microchip Technology Incorporated.

PIC is a registered trademark of Microchip Technology Incorporated.
