#include "holberton.h"
/**
 *b - return binary
 *@bin: binary
 *@b_others: buffer of others (flags, width, precision & lenght)
 *Return: binary
 */
int b(va_list bin, char *b_others)
{
	unsigned int a;
	unsigned int b;
	int *c;
	int d;
	int e = 0;

	a = va_arg(bin, unsigned int);
	b = a;
	while (a / 2 != 0)
	{
	a /= 2;
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
	c[d] = b % 2;
	b /= 2;
	}
	for (d = e - 1; d >= 0; d--)
	{
	_putchar(c[d] + '0');
	}
	free(c);
	b_others = b_others;
	return (e);
}
