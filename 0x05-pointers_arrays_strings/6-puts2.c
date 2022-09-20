#include "main.h"
#include "2-strlen.c"
/**
 * puts2 - takes string as a parameter
 *
 * @str: string taken as input
 */
void puts2(char *str)
{
	int i, len;

	len = _strlen(str);
	for (i = 0; i < len; i += 2)
		_putchar(str[i]);
	_putchar('\n');
}
