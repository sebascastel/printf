#include "holberton.h"
/**
 *c - return char
 *@cha: char
 *@buffer: buffer of others (flags, width, precision & lenght)
 *@ip: pointer
 *
 *Return: char
 */
int c(va_list cha, char *buffer, int *ip, char *buffer_flags)
{
	char aux;
	*buffer_flags = *buffer_flags;
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
int s(va_list str, char *buffer, int *ip, char *buffer_flags)
{
	int a;
	char *b;

	b = va_arg(str, char *);
	*buffer_flags = *buffer_flags;

	if (b == NULL)
	b = "(null)";
	a = 0;
	while (b[a] != '\0')
	{
		*ip = c_buffer(buffer, ip);
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
int in(va_list inte, char *buffer, int *ip, char *buffer_flags)
{
	unsigned int a;
	int b, ret_flags;
	int d = 1;

	b = va_arg(inte, int);
	ret_flags = check_flags(buffer_flags);

	if (b < 0)
	{
		more_buffer(buffer, ip, '-');
		a = b * -1;
	}
	else
	{
		a = b;
		if (ret_flags / 4 == 1 )
			more_buffer(buffer, ip, '+');
		else if (ret_flags % 2 == 1)
			more_buffer(buffer, ip, ' ');
	}
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
