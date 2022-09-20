#include "main.h"
#include "2-strlen.c"

/**
 * puts_half - takes string as input
 *
 * @str: string to be taken
 */
void puts_half(char *str)
{
	int len, i;

	len = _strlen(str);
	if (len % 2 == 0)
	{
		for (i = len / 2; i < len; i++)
		{
			_putchar(str[i]);
		}
	}
	else
	{
		for ((i = (len + 1) / 2); i < len; i++)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}

