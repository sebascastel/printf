#include "holberton.h"
/**
 * R - prints rot13
 * @rot: rot
 * Return: c
 */
int R(va_list rot)
{
	int a, boo;
	char *c;

	a = boo = 0;
	c = va_arg(rot, char *);
	if (c == NULL)
	return (-1);
	while (c[a] != '\0')
	{
	if ((c[a] >= 'a' && c[a] <= 'z') || (c[a] >= 'A' && c[a] <= 'Z'))
	{
	if ((c[a] >= 'n' && c[a] <= 'z') || (c[a] >= 'N' && c[a] <= 'Z'))
	boo = boo + _putchar(c[a] - 13);
	else
	boo = boo + _putchar(c[a] + 13);
	}
	else
	boo = boo + _putchar(c[a]);
		a++;
	}
	return (boo);
}
