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
/**
 *o - octal
 *@oct: octal
 *Return: o
 */
int o(va_list oct)
{
	unsigned int a;
	unsigned int b;
	int *c;
	int d;
	int e = 0;

	a = va_arg(oct, unsigned int);
	b = a;
	while (a / 8 != 0)
	{
	a /= 8;
	e++;
	}
	e++;
	c = malloc(sizeof(int) * e);
	if (c == NULL)
	{
	free(c);
	return (0);
	}
	for (d = 0; d < e; d++)
	{
	c[d] = b % 8;
	b /= 8;
	}
	for (d = e - 1; d >= 0; d--)
	{
	_putchar(c[d] + '0');
	}
	free(c);
	return (e);
}
