/*
 * SimpleSerial.c
 *
 * Created: 16.05.2025 14:18:36
 * Author : JoachimWagner
 */ 

#include <avr/io.h>
#include <avr/interrupt.h>
#include <stdlib.h>
#include "uart.h"
uint8_t ReceivedChar;

void DoIt(uint8_t receivedChar){
	uart_write(receivedChar);
}



int main(void)
{
	uart_init(DoIt);
	
	sei();
	
	uart_write_double(123.4);
	uart_send_string("\r\n");
	
    while (1) 
    {
		                  
		         
	 
    }
}

