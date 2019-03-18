#include "holberton.h"

void r_buffer(char *buffer, int *ip)
{
	int a;
	for (a = 0; a < 1024; a++)
	{
		buffer[a] = 0;
		*ip = 0;
	}
}

int c_buffer(char *buffer, int *ip)
{
	if (*ip >= 1024)
	{
		write(1, buffer, 1024);
		r_buffer(buffer, ip);
	}
	return (*ip);
}



