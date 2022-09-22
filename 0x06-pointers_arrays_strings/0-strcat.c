#include "main.h"

/**
 * _strcat - appends src to the dest string
 * @dest: string to append by src
 * @src: string to append to dest
 *
 * Return: address of dest
 */
char *_stract(char *dest, char *src)
{
	int x, y;

	x = y = 0;
	while (*(dest + x))
		x++;
	while ((*(dest + x) = *(src + y)))
	{
		x++;
		y++;
	}
	return (dest);
}

