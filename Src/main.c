#include <stdio.h>
#include <stdint.h>
#include "UART.h"
#include "LED.h"
#include "SYSTICK.h"

void VulnerableFunction(void)
{
    char buffer[32];  // Small stack buffer

    UART2_TxString("Enter data: ");

    // 👇 Using the safe driver unsafely: overflow incoming!
    UART2_RxString((uint8_t*)buffer, 100);  // Overwrites past 32 bytes

    UART2_TxString("Done.\n");
}

void TargetFunction(void)
{
    while (1)
    {
    	LED_Toggle();
    	delay_ms(250);
    }
}

int main(void)
{
    UART2_Init();
    LED_Init();

    UART2_TxString("System Ready.\n");

    VulnerableFunction();

    while (1)
    {

    }
}
