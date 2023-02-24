#include "main.h"

/**
 * print_line _ draws a straight line in the terminal
 * length - the length of the line to be drawn
 */

void print_line(int n)
{
	int length;

	if (n > 0)
	{
	for (length = 0; length < n; length++)
		_putchar('_');
	}
	_putchar('n');
}
