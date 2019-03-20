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
	int (*p)(va_list, char*, int*, char*);
} formato_t;
int _printf(const char *format, ...);
int (*aux(char operador))(va_list, char*, int*, char*);
int _putchar(char c);
int _strlen(char *s);
int c(va_list cha, char *b_others, int *ind, char *b_flags);
int s(va_list str, char *b_others, int *ind, char *b_flags);
int in(va_list inte, char *b_others, int *ind, char *b_flags);
int b(va_list bin, char *b_others, int *ind, char *b_flags);
int u(va_list unsi, char *b_others, int *ind, char *b_flags);
int o(va_list oct, char *b_others, int *ind, char *b_flags);
int x(va_list hexl, char *b_others, int *ind, char *b_flags);
int X(va_list hexu, char *b_others, int *ind, char *b_flags);
int Upper_S(va_list Str, char *b_others, int *ind, char *b_flags);
int p_ptr(va_list pointer, char *b_others, int *ind, char *b_flags);
int hex(char a, unsigned int b, unsigned int c);
int R(va_list rot, char *b_others, int *ind, char *b_flags);
void r_buffer(char *buffer, int *ip);
int c_buffer(char *buffer, int *ip);
void more_buffer(char *buffer, int *ip, char char_form);
int r(va_list rev, char *b_others, int *ind, char *b_flags);
int check_flags(char *buffer_flags);


#endif
