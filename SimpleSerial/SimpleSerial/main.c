/*
 * SimpleSerial.c
 *
 * Created: 16.05.2025 14:18:36
 * Author : JoachimWagner
 */ 

#include <avr/io.h>
#include "uart.h"

void doIt(char receivedChar) {
	uart_write_char(receivedChar);
}

int main(void)
{
	
	uart_init(doIt);


	uart_write_string("Hallo Uart");
	uart_write_string("\r\n");
	uart_write_double(3.14);
	uart_write_string("\r\n");
    while (1) 
    {
		  //uint8_t receivedData = uart_read_char();
		  //uart_write_char(receivedData);                
		 
		   
		    
	 
    }
}

