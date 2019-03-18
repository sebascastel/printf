#include "holberton.h"
/**
 *p_ptr - print pointer
 *@pointer: integer
 *@b_others: buffer of others (flags, width, precision & lenght)
 *Return: # prints
 */
int p_ptr(va_list *pointer, char *b_others)
{
	char *ptr;
	int a;
	long int num;
	static char *hex = "0123456789abcdef";
	static char buffer[50];

	num = (long int)pointer;
	ptr = &buffer[49];
	*ptr = '\0';
	a = 0;
	do {
	*--ptr = hex[num % 16];
	num /= 16;
	} while (num != 0);

	a = a + _putchar ('0');
	a = a + _putchar ('x');
	while (*ptr != '\0')
	{
		a = a + _putchar (*ptr);
		ptr++;
	}
	b_others = b_others;
	return (a);
}
