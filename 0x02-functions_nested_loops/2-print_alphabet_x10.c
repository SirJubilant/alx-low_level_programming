#include "main.h"

/**
 * print_alphabet_x10 - uses nested loops to print lower case and new line
 */
void print_alphabet_x10(void)
{
int newline = 0;
char low;

while (newline < 10)
{
for (low = 'a'; low <= 'z'; low++)
{
_putchar(low);
}
_putchar('\n');
newline++;
}
}
