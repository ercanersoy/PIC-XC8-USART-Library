/* 
 *  USART.h - Source file of PIC MPLABX USART library
 *  Written by Ercan Ersoy.
 */

#include <xc.h>
#include "USART.h"

void USART_calculate_baud(const unsigned long int baudrate)
{
    unsigned int value = 0;
    value = (_XTAL_FREQ - baudrate * 16) / (baudrate * 16);
    BRGH = 1;
    
    if(value < 256)
    {
       SPBRG = value;
    }
}

void USART_send(const char data)
{
    while(!TRMT);
    TXREG = data;
}

unsigned char USART_TSR_control(void)
{
    return TRMT;
}

void USART_print(const char *string)
{
    int i = 0;
    
    for(i; string[i] != '\0'; i++)
    {
        USART_send(string[i]);
    }
}

unsigned char USART_read_available(void)
{
    return RCIF;
}

char USART_read(void)
{
    while(!RCIF);
    return RCREG;
}
