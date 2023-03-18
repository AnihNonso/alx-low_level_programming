#include <stdio.h>

/**
 * main - main function
 *
 * Return: 0
 */

int main(void)
{
	int i;

	for (i = 48 ; i < 10 ; i++)
	{
		putchar(i + '0');
		if (1 != 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
