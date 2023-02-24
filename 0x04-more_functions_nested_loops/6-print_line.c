#include "main.h"

/**
 * print_line _ draws a straight line in the terminal
 * @n: the number of lines to be drawn
 */

void print_line(int n)
{
	int length;

	if (n > 0)
	{
	for (length = 0; length < n; length++)
		_putchar('_');
	}
	_putchar('\n');
}
