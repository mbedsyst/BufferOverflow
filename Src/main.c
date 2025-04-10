#include <stdio.h>
#include <stdint.h>
#include "UART.h"
#include "SYSTICK.h"


int main()
{
	UART2_Init();

	printf("\n\n\n EXECUTING APPLICATION CODE\n\r");
	delay_ms(5000);

	while(1)
	{
		printf("Hello World\n\r");
		delay_ms(1000);
	}
}
