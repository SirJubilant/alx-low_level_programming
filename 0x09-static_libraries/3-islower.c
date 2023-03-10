#include "main.h"

/**
 * _islower - checks if letter is lowercase.
 * @c: character to be checked.
 * Return: 0-if lowercae, 1-if otherwise.
 */
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
return (1);
else
return (0);
}

