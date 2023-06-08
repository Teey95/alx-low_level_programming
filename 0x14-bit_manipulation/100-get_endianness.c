#include <stdio.h>
#include "main.h"
/**
 * get_endianness - check endianness
 *
 * Return: 0 for big endian, return 1 for little endian
 */
int get_endianness(void)
{
int NUM;
NUM = 1;
if (*(char *)&NUM == 1)
return (1);
else
return (0);
}
