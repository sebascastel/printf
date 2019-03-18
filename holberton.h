#ifndef HOLBERTON
#define HOLBERTON
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
/**
 * struct formato - check the formats
 *@fo: the format to print
 *@p: function to use
 */
typedef struct formato
{
	char fo;
	int (*p)(va_list, char*, int*);
} formato_t;
int _printf(const char *format, ...);
int (*aux(char operador))(va_list, char*, int*);
int _putchar(char c);
int _strlen(char *s);
int c(va_list cha, char *b_others, int *ind);
int s(va_list str, char *b_others, int *ind);
int in(va_list inte, char *b_others, int *ind);
int b(va_list bin, char *b_others, int *ind);
int u(va_list unsi, char *b_others, int *ind);
int o(va_list oct, char *b_others, int *ind);
int x(va_list hexl, char *b_others, int *ind);
int X(va_list hexu, char *b_others, int *ind);
int Upper_S(va_list Str, char *b_others, int *ind);
int p_ptr(va_list pointer, char *b_others, int *ind);
int hex(char a, unsigned int b, unsigned int c);
int R(va_list rot, char *b_others, int *ind);
void r_buffer(char *buffer, int *ip);
int c_buffer(char *buffer, int *ip);
int r(va_list rev, char *b_others, int *ind);

#endif
