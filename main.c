#include <limits.h>
#include <stdio.h>
#include "holberton.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int len;
	int len2;
	unsigned int ui;
	void *addr;
	_printf("%S\n", "Holberton\nSchool");
	_printf("Hola.. funciona\n");
	_printf("%r", "\nHola funciona");
	len = _printf("Let's try to printf a simple sentence.\n");
	len2 = printf("Let's try to printf a simple sentence.\n");
	ui = (unsigned int)INT_MAX + 1024;
	addr = (void *)0x7ffe637541f0;
	_printf("Length:[%d, %i]\n", len, len);
	printf("Length:[%d, %i]\n", len2, len2);
	_printf("Binarios: [%b]\n", len);
	_printf("ROT13: [%R]\n", "ABCabc");
	_printf("Negativos:[%+0123.5678d]\n", -762534);
//	_printf("%S\n", "Holberton\nSchool");
	_printf("%p\n", addr);
	printf("%p\n", addr);
	printf("Negative:[%d]\n", -762534);
	_printf("Unsigned:[%u]\n", ui);
	printf("Unsigned:[%u]\n", ui);
	_printf("Unsigned octal:[%o]\n", ui);
	printf("Unsigned octal:[%o]\n", ui);
//	_printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
//	printf("Del real Unsigned hexadecimal:[%x, %X]\n", ui, ui);
	_printf("Character:[%c] ... %c ---- %c \n", 'H', 'm', 'l');
//	printf("Character:[%c]\n", 'H');
	_printf("String:[%s]\n", "I am a string !");
//	printf("String:[%s]\n", "I am a string !");
//	_printf("Address:[%p]\n", addr);
//	printf("Address:[%p]\n", addr);
//	len = _printf("Percent:[%%]\n");
//	len2 = printf("Percent:[%%]\n");
//	_printf("Len:[%d]\n", len);
//	printf("Len:[%d]\n", len2);
//	_printf("Unknown:[%r]\n");
//	printf("Unknown:[%r]\n");
	return (0);
}
