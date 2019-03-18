#include "holberton.h"
/**
 *u - return unsigned
 *@unsi: unsigned
 *@b_others: buffer of others (flags, width, precision & lenght)
 *Return: unsigned
 */
int u(va_list unsi, char *b_others)
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
	b_others = b_others;
	return (a);
}
/**
 *o - octal
 *@oct: octal
 *Return: o
 *@b_others: buffer of others (flags, width, precision & lenght)
 */
int o(va_list oct, char *b_others)
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
	b_others = b_others;
	return (e);
}
/**
 *hex - aux
 *@a: char
 *@b: int 1
 *@c: int 2
 *Return: o
 */
int hex(char a, unsigned int b, unsigned int c)
{
	char d;
	unsigned int e;
	unsigned int f;

	e = b % c;
	f = b / c;

	if (e > 10)
	d = (e - 10) + a;
	else
	{
	d = e + '0';
	}
	if (f == 0)
	{
	return (_putchar(d));
	}
	if (f < b)
	{
	if (f > 10)
	return (_putchar(f - 10 + a) + _putchar(d));
	return (_putchar(f = '0') + _putchar(d));
	}
	return (hex(f, c, a) + _putchar(d));
}
/**
 *x - hex
 *@hexl: lowercase
 *@b_others: buffer of others (flags, width, precision & lenght)
 *Return: hexl
 */
int x(va_list hexl, char *b_others)
{
	b_others = b_others;
return (hex(va_arg(hexl, unsigned int), 16, 'a'));
}
/**
 *X - hex
 *@hexu: uppercase
 *@b_others: buffer of others (flags, width, precision & lenght)
 *Return: hexu
 */
int X(va_list hexu, char *b_others)
{
	b_others = b_others;
return (hex(va_arg(hexu, unsigned int), 16, 'A'));
}
