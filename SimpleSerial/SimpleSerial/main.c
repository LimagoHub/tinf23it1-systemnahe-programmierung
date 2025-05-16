/*
 * SimpleSerial.c
 *
 * Created: 16.05.2025 14:18:36
 * Author : JoachimWagner
 */ 

#include <avr/io.h>
#include "uart.h"

int main(void)
{
	uart_init();
	
	uint8_t ReceivedChar;
	
    while (1) 
    {
		                  
		 ReceivedChar = uart_read();
		 ReceivedChar ++;
		 uart_write(ReceivedChar);               
	 
    }
}

