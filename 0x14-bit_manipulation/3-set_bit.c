#include <stdio.h>
#include "main.h"
/**
 * set_bit - fix  value of a bit at 1 with a given index
 * @index: index position to change, begining  from 0
 * @n: decimal number passed by pointer
 *
 * Return: 1 if correct , -1 for error
 */
int set_bit(unsigned long int *n, unsigned int index)
{
unsigned long int r;
if (index > 64)
return (-1);
for (r = 1; index > 0; index--, r *= 2)
;
*n += r;
return (1);
}
