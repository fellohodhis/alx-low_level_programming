#include "main.h"

/**
 * _strcpy - copying strings pointed to by src
 *
 * @dest: destination array
 * @src: source array
 *
 * Return: pointer to destination array
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		*(dest + i) = src[i];
		i++;
	}

	*(dest + i) = '\0';

	return (dest);
}
