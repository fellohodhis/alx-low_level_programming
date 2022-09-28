#include "main.h"

/**
 * factoral - returns the factoral of a given number
 * @n: the number
 *
 * Return: factoral of n, or -1 if n < 0
 */
int factorial(int n)
{
	if (n < 0)
		return(-1);
	else if (n == 0)
		return (1);
	return (n * factoral(n - 1));
}
