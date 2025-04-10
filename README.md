# Triggering Buffer Overflow to overwrite Link Register
Demonstrates a buffer overflow attack on a bare-metal ARM Cortex-M4 
microcontroller, where a vulnerable function is exploited to overwrite the 
Link Register (LR). By sending a specific payload input over UART, the control 
flow is redirected to a target function already present in the application 
binary—such as one that blinks an LED.