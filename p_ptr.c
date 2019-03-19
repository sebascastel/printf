#include "holberton.h"
/**
 *p_ptr - print pointer
 *@pointer: integer
 *@buffer: buffer to print
 *@ip: pointer
 *Return: # prints
 */
int p_ptr(va_list pointer, char *buffer, int *ip)
{
	char *ptr;
	long int num;
	static char *hex = "0123456789abcdef";
	static char my_buffer[50];

	num = va_arg(pointer, long int);
	ptr = &my_buffer[49];
	*ptr = '\0';

	do {
		*--ptr = hex[num % 16];
		num /= 16;
	} while (num != 0);

	*ip = c_buffer(buffer, ip);
	buffer[*ip] = '0';
	(*ip)++;
	*ip = c_buffer(buffer, ip);
	buffer[*ip] = 'x';
	(*ip)++;
	while (*ptr != '\0')
	{
		*ip = c_buffer(buffer, ip);
		buffer[*ip] = *ptr;
		(*ip)++;
		ptr++;
	}

	return (*ip);
}
