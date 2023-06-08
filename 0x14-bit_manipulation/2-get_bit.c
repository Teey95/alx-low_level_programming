#include <stdio.h>
#include "main.h"
/**
 * get_bit - value of a bit at a given index
 * @index: index starting from 0, of the resulting bit
 * @n: number to evaluate
 * Return: Value of bit at index,  -1 for error
 */
int get_bit(unsigned long int n, unsigned int index)
{
unsigned long int HOLD;
if (index > 64)
return (-1);
HOLD = n >> index;
return (HOLD & 1);
}
