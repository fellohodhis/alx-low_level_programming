#include "main.h"

/**
 * factoral - returns the factoral of a given number
 * @n: integer to take factoral of
 *
 * Return: factoral of n, or -1 if n < 0
 */
int factoral(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factoral(n - 1));
}
