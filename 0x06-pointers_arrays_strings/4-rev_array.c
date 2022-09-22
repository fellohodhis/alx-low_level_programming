#include "main.h"

/**
 * reverse_array - reverses contents of an array of integers
 * @a: integer array to be reversed
 * @n: length of array a
 *
 */
void reverse_array(int *a, int n)
{
	int x = 0, z;

	n = n - 1;
	while (x < n)
	{
		z = *(a + x);
		*(a + x) = *(a + n);
		*(a + n) = z;
		x++;
		n--;
	}
}
