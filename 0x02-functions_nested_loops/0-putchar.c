#include "main.h"

/**
 *main - Starting point of program
 *
 *Description: Display_putchar using a function
 *
 *Return: 0 if succces
*/

int main(void)
{
	char *puts = "_putchar";

	char *newLine = "\n";

	_putchar(*puts);
	_putchar(*newLine);

	return (0);
}
