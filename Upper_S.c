#include "holberton.h"

/**
 *Upper_S - print S Case
 *@str: char
 *@buffer: buffer to print
 *@ip: pointer
 *@buffer_flags: buffer flags
 *Return: rint chars
 */

int Upper_S(va_list str, char *buffer, int *ip, char *buffer_flags)
{
	int a, cont;
	char *b, *hex;

	hex = "0123456789ABCDEF";
	b = va_arg(str, char *);
	*buffer_flags = *buffer_flags;
	a = 0;
	cont = 0;

	if (b == NULL)
		b = "(null)";
	while (b[cont] != '\0')
	{
		if (b[cont] >= 32 && b[cont] < 126)
		{
			*ip = c_buffer(buffer, ip);
			buffer[*ip] = b[cont];
			(*ip)++;
		}
		else
		{
			*ip = c_buffer(buffer, ip);
			buffer[*ip] = '\\';
			(*ip)++;
			*ip = c_buffer(buffer, ip);
			buffer[*ip] = 'x';
			(*ip)++;
			*ip = c_buffer(buffer, ip);
			buffer[*ip] = hex[(b[cont] / 16)];
			(*ip)++;
			*ip = c_buffer(buffer, ip);
			buffer[*ip] = hex[(b[cont] % 16)];
			(*ip)++;
		}
		cont++;
	}
	return (a);
}
