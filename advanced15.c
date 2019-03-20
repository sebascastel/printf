#include "holberton.h"
/**
 * R - prints rot13
 * @rot: rot
 *@buffer: buffer to print
 *@ip: pointer
 * Return: Rot
 */
int R(va_list rot, char *buffer, int *ip, char *buffer_flags)
{
	int a, boo;
	char *c, test;

	a = boo = 0;
	c = va_arg(rot, char *);
	*buffer_flags = *buffer_flags;
	if (c == NULL)
		return (-1);
	while (c[a] != '\0')
	{
		if ((c[a] >= 'a' && c[a] <= 'z') || (c[a] >= 'A' && c[a] <= 'Z'))
		{
			if ((c[a] >= 'n' && c[a] <= 'z') || (c[a] >= 'N' && c[a] <= 'Z'))
			{
				*ip = c_buffer(buffer, ip);
				test = c[a] - 13;
				buffer[*ip] = test;
				(*ip)++;
				a++;
			}
			else
			{
				*ip = c_buffer(buffer, ip);
				test = c[a] + 13;
				buffer[*ip] = test;
				(*ip)++;
				a++;
			}
		}
		else
			a++;
	}
return (*ip);
}
