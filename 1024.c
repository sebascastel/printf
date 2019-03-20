#include "holberton.h"

/**
 * r_buffer - Reset buffer
 *
 *@buffer: buffer to reset
 *@ip: pointer
 * Return: No return
 */
void r_buffer(char *buffer, int *ip)
{
	int a;

	for (a = 0; a < 1024; a++)
	{
		buffer[a] = 0;
		*ip = 0;
	}
}

/**
 * c_buffer - Verification buffer
 *
 *@buffer: buffer to verify
 *@ip: pointer
 * Return: ip en 0, buffer clean
 */
int c_buffer(char *buffer, int *ip)
{
	if (*ip >= 1024)
	{
		write(1, buffer, 1024);
		r_buffer(buffer, ip);
	}
	return (*ip);
}


/**
 *more_buffer - Make c_buffer, ip++ and buffer assign
 *used to reduce lines
 * @buffer: buffer to store
 *@ip: pointer
 *@char_form: to be stored
 * Return: integer pointer to function
 */
void more_buffer(char *buffer, int *ip, char char_form)
{
	c_buffer(buffer, ip);
	buffer[*ip] = char_form;
	(*ip)++;
}

