#include "main.h"

/**
 * _strncat - concatenate 2 strings
 * @dest: destination string
 * @src: source string
 * @n: number of characters to append
 * Return: concatenated string
 */

char *_strncat(char *dest, char *src, int n)
{
		int i, j;

	for (i = 0; dest[i] != '\0'; i++)
	{
		continue;
	}
	for (j = 0; src[j] != '\0' && j < n; j++)
	{
		dest[i + j] = src[j];
	}
	dest[i + j] = '\0';
	return (dest);
}
