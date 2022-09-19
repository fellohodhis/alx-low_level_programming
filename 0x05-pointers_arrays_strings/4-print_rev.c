#include "main.h"

/**
 * print_rev - printing reverse string
 *
 * @s: reversed string
 */
void print_rev(char *s)
{
	int i = 0;

	while (s[i])
		i++;

	while (i--)
		_putchar(s[i]);

	_putchar('\n');
}
