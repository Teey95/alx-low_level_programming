#include "main.h"
#include <stdio.h>
/**
 * print_array - print n elements of an array of integers
 * @a: int to check
 * @n: int to check
 * Return: 0 Always success
 */

void print_array(int *a, int n)
{
	int x;

	for (x = 0; x < n; x++)
		if (x != n - 1)
		printf("%d, ", a[x]);
		else
			printf("%d", a[x]);
printf("\n");
}
