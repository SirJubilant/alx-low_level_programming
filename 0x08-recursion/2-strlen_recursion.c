#include "main.h"

/**
 * _strlen_recursion - this function returns the lenghth of a string.
 * @s: string whose length is to be returned.
 * Return: the value of length
 */

int _strlen_recursion(char *s)
{
	int len = 0;

	if (*s)
	{
		len = len + _strlen_recursion(s + 1);
		len++;
	}
	return (len);
}

