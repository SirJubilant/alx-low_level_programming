#include "main.h"

/**
 * _isupper - checks if the letter is uppercase
 * @c: character to be checked.
 * Return: 0 -if uppercase, 1 - if otherwise
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
