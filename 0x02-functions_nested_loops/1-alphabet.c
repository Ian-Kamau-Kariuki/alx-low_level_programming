#include "main.h"

/**
 *print_alphabet - Prints the alphabet in lowercase using _putchar function
 *
 * Return void
*/
void print_alphabet(void)
{
	char c = 'a';

	char *newLine = "\n";

	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}

	_putchar(*newLine);
}
