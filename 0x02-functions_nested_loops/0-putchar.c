#include "main.h"

/*
 * main - Starting point of program that prints _putchar
 *
 * Return: 0 if succces
*/

int main(void)
{
	char *puts = "_putchar";
	
	char *newLine = "\n";
	_putchar(*puts);
	_putchar(*newLine);

	return (0);
}
