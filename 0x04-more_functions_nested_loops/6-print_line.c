#include "main.h"

/**
 * print_line - printing lines in terminal
 * @n: number of times to print char
 * Return: void
 */

void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
