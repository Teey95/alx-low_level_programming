#include "main.h"

/**
 * _puts - Print a string to stdout
 * @str: the String
 * Return: The length of the string
 */

void _puts(char *str)
{
	int a = 0;

	while (str[a] != '\0')
	{
		_putchar(str[a]);
		a++;
	}
	_putchar('\n');
}
