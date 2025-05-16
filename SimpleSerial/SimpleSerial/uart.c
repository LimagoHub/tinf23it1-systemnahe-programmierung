/*
 * uart.c
 *
 * Created: 16.05.2025 14:37:59
 *  Author: JoachimWagner
 */ 

#include "uart.h"

void uart_init(){
	/* Set baud rate */
	UBRR0H = (MYUBRR >> 8);
	UBRR0L = MYUBRR;
	
	UCSR0B |= (1 << RXEN0) | (1 << TXEN0);      // Enable receiver and transmitter
	UCSR0C |= (1 << UCSZ01) | (1 << UCSZ00);    // Set frame: 8data, 1 stp
}



uint8_t uart_read(){
	 while ( !(UCSR0A & (1 << RXC0)) )  ;     // Wait until data is received
	 
	 return UDR0;
	
}


void uart_write(uint8_t valueToSend){
	 while ( !(UCSR0A & (1 << UDRE0)) ) {}     // Wait until buffer is empty
	 
	 UDR0 = valueToSend;
}

void uart_send_string(uint8_t * message){
	while( * message)
		uart_write(*message ++);
}