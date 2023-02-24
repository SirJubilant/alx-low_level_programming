#iclude "main.h"

/**
 * more_numbers - this function prints numbers 0 - 14 ten times
 * followed by a new line
 */

void more_numbers(void)
{
	int num, line;

	for (line = 0; line <= 9; line++)
	{
		for (num = 0; num <= 14; num++)
		{
			_putchar((num % 10) + '0');

		}
		_putchar('\n');
	}
}
