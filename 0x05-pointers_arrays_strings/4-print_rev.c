#include "main.h"

/**
 * print_rev - Prints a string in reverse.
 * @s: The string
 */

void print_rev(char *s)
{
	int  rev, len;

	len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}

	s--;
	for (rev = len; rev >= 0; rev--)
	{
		_putchar(*s);
		s--;
	}

	_putchar('\n');
}
