#include "holberton.h"
/**
 *c - return char
 *@cha: char
 *@buffer: buffer of others (flags, width, precision & lenght)
 *@ip: pointer
 *
 *Return: char
 */
int c(va_list cha, char *buffer, int *ip)
{
	char aux;

	aux = va_arg(cha, int);
	*ip = c_buffer(buffer, ip);
	buffer[*ip] = aux;
	(*ip)++;
	return (*ip);
}

/**
 *s - return s
 *@str: char
 *@buffer: buffer of others (flags, width, precision & lenght)
 *@ip: pointer
 *
 *Return: str
 */
int s(va_list str, char *buffer, int *ip)
{
	int a;
	char *b;

	b = va_arg(str, char *);

	if (b == NULL)
	b = "(null)";
	a = 0;
	*ip = c_buffer(buffer, ip);
	while (b[a] != '\0')
	{
		buffer[*ip] = b[a];
		a++;
		(*ip)++;
	}
	return (*ip);
}
/**
 *in - return int
 *@inte: integer
 *@buffer: buffer of others (flags, width, precision & lenght)
 *@ip: pointer
 *Return: int
 */
int in(va_list inte, char *buffer, int *ip)
{
	unsigned int a;
	int b;
	int d = 1;

	b = va_arg(inte, int);
	if (b < 0)
	{
		*ip = c_buffer(buffer, ip);
		buffer[*ip] = '-';
		(*ip)++;
		a = b * -1;
	}
	else
		a = b;
	while (a / d > 9)
		d *= 10;
	while (d != 0)
	{
		*ip = c_buffer(buffer, ip);
		buffer[*ip] = (a / d + '0');
		(*ip)++;
		a = a % d;
		d = d / 10;
	}
	return (*ip);
}
