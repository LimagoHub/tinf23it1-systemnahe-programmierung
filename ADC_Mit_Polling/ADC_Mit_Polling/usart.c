#include "usart.h"

void usart_init() {

	
	//Setze baud rate
	UBRRL=UBRRVAL;		//low byte
	UBRRH=(UBRRVAL>>8);	//high byte

	//Setze data frame format: asynchronous mode,keine parität, 1 stop bit, 8 datenbits
	UCSRC=(1<<URSEL)|(0<<UMSEL)|(0<<UPM1)|(0<<UPM0)| (0<<USBS)|(0<<UCSZ2)|(1<<UCSZ1)|(1<<UCSZ0);
	
		
	//Aktivieren von Transmitter und Receiver, sowie Interrupt on receive complete
	UCSRB=(1<<RXEN)|(1<<TXEN)|(1<<RXCIE);
	
	
	//set_sleep_mode(SLEEP_MODE_IDLE);

	//globale Interrupts erlauben
	sei();

}


void usart_send(uint8_t Temp){

	while ( ! (UCSRA & (1 << 5)));

	UDR=Temp;
	if (Temp == '\r') {
		UDR = '\n';
	}

}
uint8_t usart_receive(){

}

void usart_send_string(char * s){

	while (*s)
		usart_send(	*s ++);
}
