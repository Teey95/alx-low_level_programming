#include <stdio.h>
#include "main.h"
/**
 * binary_to_uint - convert binary number to unsigned int
 *
 * @b: char string
 * Return: converted decimal number or 0 when there is an unconvertable char
 */
unsigned int binary_to_uint(const char *b)
{
unsigned int sum, po;
int l;
if (b == NULL)
return (0);
for (l = 0; b[l]; l++)
{
if (b[l] != '0' && b[l] != '1')
return (0);
}
for (po = 1, sum = 0, l--; l >= 0; l--, po *= 2)
{
if (b[l] == '1')
sum += po;
}
return (sum);
}
