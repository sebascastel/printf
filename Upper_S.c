#include "holberton.h"

/**
 *Upper_S - print S Case
 *@str: char
 *@b_others: buffer of others (flags, width, precision & lenght)
 *Return: # print chars
 */
int Upper_S(va_list str, char *b_others)
{
	int a, cont;
	char *b, *hex;

	hex = "0123456789ABCDEF";
	b = va_arg(str, char *);
	a = 0;
	cont = 0;

	if (b == NULL)
		b = "(null)";
	while (b[cont] != '\0')
	{
		if (b[cont] >= 32 && b[cont] < 126)
			a = a + _putchar(b[cont]);
		else
		{
			a = a + _putchar('\\');
			a = a + _putchar('x');
			a = a + _putchar(hex[(b[cont] / 16)]);
			a = a + _putchar(hex[(b[cont] % 16)]);
		}
		cont++;
	}
	b_others = b_others;
	return (a);
}
