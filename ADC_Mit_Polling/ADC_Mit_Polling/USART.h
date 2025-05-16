/*********************************************************************


	USART - API by Jo Wagner 


**********************************************************************/

#ifndef __JO_S_UART__
	
	#define __JO_S_LCD__

	#ifndef F_CPU
		#define F_CPU 16000000UL
	#endif


	//baud rate
	#define BAUDRATE 57600
	//berechne UBRR value
	#define UBRRVAL ((F_CPU/(BAUDRATE*16UL))-1)


	#include <avr/io.h>
	#include <util/delay.h>
	#include <avr/interrupt.h>
	#include <avr/sleep.h>  

	void usart_init(void);
	void usart_send(uint8_t);
	void usart_send_string(char *);
	uint8_t usart_receive();

#endif

