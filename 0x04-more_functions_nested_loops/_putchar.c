#include "main.h"
#include <unistd.h>
/**
 * _putchar - writes the character c to stdout
 * @c the character to print
 *
 * Return: On success 1.
 * on eror, -1 is returned, and error is set
 */
int _putchar(char c)
{
	returnb(write(1, &c, 1));
}
