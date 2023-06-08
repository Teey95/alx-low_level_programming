#include <stdio.h>
#include "main.h"
/**
 * print_binary - result to binary representation of a number
 *
 * @n: decimal number to print binary
 */
void print_binary(unsigned long int n)
{
unsigned long int c;
int shi;
if (n == 0)
{
printf("0");
return;
}
for (c = n, shi = 0; (c >>= 1) > 0; shi++)
;
for (; shi >= 0; shi--)
{
if ((n >> shi) & 1)
printf("1");
else
printf("0");
}
}
