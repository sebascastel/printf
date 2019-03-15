#include "holberton.h"
/**
 *u - return unsigned
 *@unsi: unsigned
 *Return: unsigned
 */
int u(va_list unsi)
{
	int a = 0;
	int b = 1;
	unsigned int c;

	c = va_arg(unsi, unsigned int);
	while (c / b > 9)
	b *= 10;
	while (b != 0)
	{
	a = a + _putchar(c / b + '0');
	c = c % b;
	b = b / 10;
	}
	return (a);
}
