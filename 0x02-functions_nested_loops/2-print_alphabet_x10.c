#include "main.h"

/**
 *print_alphabet_x10()- prints the alpbate 10 times in lowercase
 *
 *Return: void
*/

void print_alphabet_x10(void)
{
	char c = 'a';

	char *newLine = "\n";

	int i = 0;

	while (i < 10)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
	i++;
	_putchar(*newLine);
	}
}


