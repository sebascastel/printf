#ifndef HOLBERTON
#define HOLBERTON
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * struct formato - check the formats
 *@fo : the format to print
 *@p : function to use
 */
typedef struct formato
{
	char *fo
	int (*p)();
}formato_t;
int _printf(const char *format, ...);
int _putchar(char c);
int _strlen(char *s);
int c(va_list cha);
int s(va_list str);
int in(va_list inte);
int b(va_list bin);
int u(va_list unsi);
int o(va_list oct);
int x(va_list hexl);
int X(va_list hexu);
int hex(char a, unsigned int b, unsigned int c);
#endif
