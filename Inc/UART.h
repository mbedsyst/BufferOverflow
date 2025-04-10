#ifndef UART_H_
#define UART_H_

#include <stdint.h>
#include "stm32f4xx.h"

void UART2_Init(void);
void UART2_TxString(char *str);
void UART2_RxString(uint8_t *buffer, uint32_t len);

#endif

