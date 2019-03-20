#include "holberton.h"
/**
 *r - return r
 *@rev: string to reverse
 *@buffer: buffer to print
 *@ip: pointer
 *
 *Return: str
 */
int r(va_list rev, char *buffer, int *ip, char *buffer_flags)
{
	int a, cont;
	char *b;

	b = va_arg(rev, char *);
	*buffer_flags = *buffer_flags;
	cont = _strlen(b) - 1;

	if (b == NULL)
		b = "(null)";
	*ip = c_buffer(buffer, ip);
	for (a = cont; a >= 0; a--)
	{
		c_buffer(buffer, ip);
		buffer[*ip] = b[a];
		(*ip)++;
	}
	return (*ip);
}
