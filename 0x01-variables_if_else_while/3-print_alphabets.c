#inclued <stdio.h>

/**
 *main - Starting point of program
 *
 *Description: Program to print alphabets in upper&lowercases
 *
 *Return: Always 0 success
 */

int main(void)
{
	char c;

	c = 'a';

	while(c <= 'z')
	{
		putchar(c);
		c++;
	}
	c = 'A';
	while (c <= 'Z')
	{
		putchar(c);
		c++;
	}
	putchar('\n');

	return (0);
}
