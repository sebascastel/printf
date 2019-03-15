#include "holberton.h"
/**
 *c - return char
 *@cha: char
 *Return: char
 */
int c(va_list cha)
{
	return (_putchar(va_arg(cha, int)));
}
/**
 *s - return s
 *@str: char
 *Return: str
 */
int s(va_list str)
{
	int a;
	char *b;

	b = va_arg(str,char *);
	if (b == NULL)
	b = "(null)";
	a = 0;
	while (b[a] != '\0')
	a = a + _putchar(b[a]);
	return (a);
}
/**
 *in - return int
 *@inte: integer
 *Return: int
 */
int in(va_list inte)
{
	unsigned a;
	int b;
	int c = 0;
	int d = 1;

	b = va_arg(inte,int);
	if (b < 0)
	{
	c = c + _putchar('-');
	a = b*-1;
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
	return (c);
}
