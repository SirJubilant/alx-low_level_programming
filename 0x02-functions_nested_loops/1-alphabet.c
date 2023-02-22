#include "main.h"

/**
 * print_alphabet - prints alphabets in lower case followed by a new line
 *
 * Return: Always 0.
 */

void print_alphabet(void)
{
	char low;

	for (low = 'a'; low <= 'z'; low++)
	{
		putchar(low);
	}
	putchar(\n);
}

