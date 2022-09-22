#include "main.h"

/**
 * cap_string - capitalizes all words in a string
 * @s: string to capitalize
 *
 * Return: address of s
 */
char *cap_string(char *s)
{
	int x = 0, j;
	char a[] = " \t\n,;.!?\"(){}";

	while (*(s + x))
	{
		if (*(s + x) >= 'a' && *(s + x) <= 'z')
		{
			if (x == 0)
				*(s + x) -= 'a' - 'A';
			else
			{
				for (j = 0; j <= 12; j++)
				{
					if (a[j] == *(s + x - 1))
						*(s + x) -= 'a' - 'A';
				}
			}
		}
		x++;
	}
	return (s);
}

