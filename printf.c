#include "holberton.h"
/**
 *aux - print
 * @operador: character to be found in the structure
 * Return: integer pointer to function
 */

int (*aux(char operador))(va_list, char*, int*)
{
	int z = 0;

	formato_t form[] = {
		{'c', c},
		{'s', s},
		{'d', in},
		{'i', in},
		{'b', b},
		{'u', u},
		{'o', o},
		{'x', x},
		{'X', X},
		{'R', R},
		{'S', Upper_S},
		{'p', p_ptr},
		{'r', r},
		{'\0', NULL}
	};
	while (form[z].fo != '\0')
	{
		if (form[z].fo == operador)
			return (form[z].p);
		z++;
	}
	return (0);
}

/**
 *_printf - print
 * @format: string
 * Return: char
 */
int _printf(const char *format, ...)
{
	int i = 0, ind = 0, *ip = &ind;
	int (*get_formato)(va_list, char*, int*);
	char buffer[1024];
	va_list ls;

	va_start(ls, format);
	if (format == NULL)
		return (-1);

	while (format != NULL && format[i] != '\0')
	{
		if (format[i] != '%')
		{
			c_buffer(buffer, ip);
			buffer[*ip] = format[i];
			(*ip)++;
		}
		else if (format[i + 1] == '%')
			{
				c_buffer(buffer, ip);
				buffer[*ip] = format[i];
				(*ip)++;
				i++;
			}
			else 
			{
				get_formato = aux(format[i + 1]);
				if (get_formato == NULL)
				{
				c_buffer(buffer, ip);
                                buffer[*ip] = format[i + 1];
                                (*ip)++;
				i++;
				}
				else
				{
				get_formato(ls, buffer, ip);
				i++;
				}
			}
		i++;
	}
	va_end(ls);
	write(1, buffer, *ip);
	return (ind);
}
