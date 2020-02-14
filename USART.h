/* 
 *  USART.h - Header file of PIC MPLABX USART library
 *  Written by Ercan Ersoy.
 */

#ifndef USART_H
#define USART_H

#define _XTAL_FREQ 4000000

void USART_calculate_baud(const unsigned long int baudrate);
void USART_send(const char data);
unsigned char USART_TSR_control(void);
void USART_print(const char *string);
unsigned char USART_read_available(void);
char USART_read(void);

#endif
