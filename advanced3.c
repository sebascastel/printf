#include "holberton.h"
/**
 *b - return binary
 *@bin: binary
 *@buffer: buffer to print
 *@ip: pointer
 *
 *Return: binary
 */
int b(va_list bin, char *buffer, int *ip, char *buffer_flags)
{
	unsigned int a;
	unsigned int b;
	int *c;
	int d;
	int e = 0;

	a = va_arg(bin, unsigned int);
	*buffer_flags = *buffer_flags;
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
		*ip = c_buffer(buffer, ip);
		buffer[*ip] = c[d] + '0';
		(*ip)++;
	}
	free(c);
	return (*ip);
}
