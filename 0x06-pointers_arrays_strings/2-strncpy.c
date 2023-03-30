#include "main.h"

/**
 *  _strncpy - copies string
 *  @dest: destination string
 *  @src: source sring
 *  @n: number of string
 *  Return: destination string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && *(src + i); i++)
	{
		*(dest + i) = *(src + i);
	}
	for (; i < n; i++)
	{
	*(dest + i) = '\0';
	}
	return (dest);
}
