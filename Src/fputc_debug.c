#include <stdio.h>
#include <stm32f7xx.h>

int fputc(int c, FILE *stream)
{
	return(ITM_SendChar(c));
}
