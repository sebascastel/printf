#include "holberton.h"
/**
 *u - return unsigned
 *@unsi: unsigned
 *@buffer: buffer of others (flags, width, precision & lenght)
 *@ip: pointer
 *Return: unsigned
 */
int u(va_list unsi, char *buffer, int *ip)
{
	int a = 0;
	int b = 1;
	unsigned int c;

	c = va_arg(unsi, unsigned int);
	while (c / b > 9)
	b *= 10;
	while (b != 0)
	{
		*ip = c_buffer(buffer, ip);
		buffer[*ip] = c / b + '0';
		(*ip)++;
		c = c % b;
		b = b / 10;
	}
	return (a);
}
/**
 *o - octal
 *@oct: octal
 *@buffer:Buffer
 *@ip: pointer
 *
 *Return: o
 */
int o(va_list oct, char *buffer, int *ip)
{
	unsigned int a;
	unsigned int b;
	int *c;
	int d;
	int e = 0;

	a = va_arg(oct, unsigned int);
	b = a;
	while (a / 8 != 0)
	{
	a /= 8;
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
	c[d] = b % 8;
	b /= 8;
	}
	for (d = e - 1; d >= 0; d--)
	{
		*ip = c_buffer(buffer, ip);
		buffer[*ip] = c[d] + '0';
		(*ip)++;
	}
	free(c);
	return (e);
}
/**
 *hex - aux
 *@a: char
 *@b: int 1
 *@c: int 2
 *Return: o
 */
int hex(char a, unsigned int b, unsigned int c)
{
	char d;
	unsigned int e;
	unsigned int f;

	e = b % c;
	f = b / c;

	if (e > 10)
	d = (e - 10) + a;
	else
	{
	d = e + '0';
	}
	if (f == 0)
	{
	return (_putchar(d));
	}
	if (f < b)
	{
	if (f > 10)
	return (_putchar(f - 10 + a) + _putchar(d));
	return (_putchar(f = '0') + _putchar(d));
	}
	return (hex(f, c, a) + _putchar(d));
}
/**
 *x - hex
 *@hexl: lowercase
 *@buffer: buffer of others (flags, width, precision & lenght)
 *@ip: pointer
 *
 *Return: hexl
 */
int x(va_list hexl, char *buffer, int *ip)
{
	char *ptr;
	int largo;
	unsigned int num;
	static char *tabla_hex = "0123456789abcdef";
	static char my_buffer[50];

	ptr = &my_buffer[49];
	*ptr = '\0';
	largo = 48;

	num = va_arg(hexl, unsigned int);
	do {
		my_buffer[largo] = tabla_hex[num % 16];
		num  /= 16;
		largo--;
	} while (num != 0);
	printf("Buffer Hexa: %s\n", my_buffer);
	*ip = c_buffer(buffer, ip);
	for (; largo < 50; largo++)
	{
		c_buffer(buffer, ip);
		buffer[*ip] = my_buffer[largo];
		(*ip)++;
	}
	return (*ip);
}
/**
 *X - hex
 *@hexu: uppercase
 *@buffer: buffer of others (flags, width, precision & lenght)
 *@ip: pointer
 *Return: hexu
 */
int X(va_list hexu, char *buffer, int *ip)
{
	unsigned int num;
	static char *tabla_hex = "0123456789ABCDEF";

	num = va_arg(hexu, unsigned int);
	*ip = c_buffer(buffer, ip);
	do {
		buffer[*ip] = tabla_hex[num % 16];
		(*ip)++;
		num  /= 16;
	} while (num != 0);
	return (*ip);
}
