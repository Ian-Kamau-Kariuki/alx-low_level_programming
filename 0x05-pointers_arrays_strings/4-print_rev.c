#include "main.h"
#include "2-strlen.c"

/**
 * print_rev - takes string as input parameter
 *
 * @s: string to be taken
 *
 * Return: string reversed
 */

void print_rev(char *s)
{
	int i;

	i = _strlen(s);

	while (i > 0)
	{
		_putchar(s[i]);
		i--;
	}
	_putchar('\n');
}
