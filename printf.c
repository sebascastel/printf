#include "holberton.h"
/**
 *_printf - print
 * @format: string
 * Return: char
 */
int _printf(const char *format, ...)
{
	va_list a;
	int z = 0;

	formato_t ops[] = {
	{"c", c},
	{"s", s},
	{"d", in},
	{"i", in},
	{"b", b},
	{"u", u},
	{"o", o},
	{"x", x},
	{"X", X},
	{"R", R},
	{NULL, NULL}
	};
	if (format == NULL)
	return (-1);
	va_start(a, format);
	z = aux(format, ops, a);
	va_end(a);
	return (z);
}
/**
 *aux - print aux
 * @format: string
 * @a: parameters
 * @aux: aux
 * Return: char
 */
int aux(const char *format, va_list a, formato_t *auxiliar)
{
	char b;
	int c = 0;
	int d = 0;
	int e = 0;

	b = format[c];
	while (b != '\0')
	{
	if (b == '%')
	{
	d = 0;
	c++;
	b = format[c];
	while (auxiliar[d].fo != NULL && b != *(auxiliar[d].fo))
	d++;
	if (auxiliar[d].fo != NULL)
	e = e + auxiliar[d].p(a);
	else
	{
	if (b == '\0')
	return (-1);
	if (b != '%')
	e += _putchar('%');
	e += _putchar(b);
	}
	}
	e += _putchar(b);
	c++;
	b = format[c];
	}
	return (e);
}
