#include "main.h"

/**
 * swap_int - sawp the value of two integers
 *
 * @a: first interger to be swapped
 * @b: second integer to be swapped
 *
 */
void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
