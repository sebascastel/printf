#include "holberton.h"
/**
 *c - return char
 *@cha: char
 *@b_others: buffer of others (flags, width, precision & lenght)
 *Return: char
 */
int c(va_list cha, char *b_others)
{
	b_others = b_others;
	return (_putchar(va_arg(cha, int)));
}
/**
 *s - return s
 *@str: char
 *@b_others: buffer of others (flags, width, precision & lenght)
 *Return: str
 */
int s(va_list str, char *b_others)
{
	int a;
	char *b;

	b = va_arg(str, char *);

	if (b == NULL)
	b = "(null)";
	a = 0;
	while (b[a] != '\0')
	a = a + _putchar(b[a]);
	b_others = b_others;
	return (a);
}
/**
 *in - return int
 *@inte: integer
 *@b_others: buffer of others (flags, width, precision & lenght)
 *Return: int
 */
int in(va_list inte, char *b_others)
{
	unsigned int a;
	int b;
	int c = 0;
	int d = 1;

	b = va_arg(inte, int);
	if (b < 0)
	{
	c = c + _putchar('-');
	a = b * -1;
	}
	else
	a = b;
	while (a / d > 9)
	d *= 10;
	while (d != 0)
	{
	c = c + _putchar(a / d + '0');
	a = a % d;
	d = d / 10;
	}
	printf("Otro de enteros: %s", b_others);
	return (c);
}
