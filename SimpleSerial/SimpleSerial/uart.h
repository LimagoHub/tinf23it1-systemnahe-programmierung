/*
 * uart.h
 *
 * Created: 16.05.2025 14:28:55
 *  Author: JoachimWagner
 */ 


#pragma once
#include <avr/io.h>
 #define F_CPU 16000000                   // Clock Speed
 #define BAUD 9600
 #define MYUBRR F_CPU/16/BAUD -1

void uart_init();
uint8_t uart_read();
void uart_write(uint8_t valueToSend);
void uart_send_string(uint8_t * message);