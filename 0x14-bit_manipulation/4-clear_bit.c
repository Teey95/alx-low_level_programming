#include <stdio.h>
#include "main.h"
/**
 * clear_bit - fix the value of a bit at 0 with a given index
 * @index: index position to change
 * @n: pointer to decimal number to change
 * Return: 1 if correct, -1 for error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
unsigned long int t;
unsigned int HOLD;
if (index > 64)
return (-1);
HOLD = index;
for (t = 1; HOLD > 0; t *= 2, HOLD--)
;
if ((*n >> index) & 1)
*n -= t;
return (1);
}
