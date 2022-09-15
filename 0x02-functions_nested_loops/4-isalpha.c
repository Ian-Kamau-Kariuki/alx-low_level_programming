#include "main.h"

/**
 *_isalpha - Checks for alphabetic character
 *
 *@c: Character to be checked
 *
 * Return: 1 if Alpha and 0 if Otherwise
 */

int _isalpha(int c)
{
	if (((c >= 'a') && (c <= 'z')) || ((c >= 'A') && (c <= 'Z')))
			return (1);
	else
			return (0);
}


