#include "main.h"

/**
 * factorial - returns the factorial of a given number.
 * @n: the number whose factorial is to be printed
 * Return: -1 when n is lower than 0
 * 1 when n is 0
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);

	else if (n == 0)
		return (1);

	return (n * factorial(n - 1));
}
