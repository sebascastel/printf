#include "holberton.h"
/**
 *aux - print
 * @operador: character to be found in the structure
 * Return: integer pointer to function
 */

int (*aux(char operador))(va_list, char*, int*, char*)
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
	int i = 0, f = 0, ind = 0, *ip = &ind, ind_flags = 0, *ip_flags = &ind_flags;
	int (*get_formato)(va_list, char*, int*, char*);
	int cont2, si_flags;
	char buffer[1024];
	char buffer_flags[100];
	char *flags = "+ #lh.-0123456789";/*string for flags*/
	va_list ls;

	va_start(ls, format);
	buffer_flags[99] = '\0';/*buffer_flags like string */ 

	i = 0;
	if (format == NULL)
		return (-1);
	while (format != NULL && format[i] != '\0')
	{
		for (f = 0; f < 100; f++)/* cleaning the buffer_flags */
			buffer_flags[f] = 0;
		if (format[i] != '%')
		{
			more_buffer(buffer, ip, format[i]);
		}
		else if (format[i + 1] == '%')
		{
			more_buffer(buffer, ip, format[i]);
			i++;
		}
		else
		{
			get_formato = aux(format[i + 1]);
			while (get_formato == NULL && format[i + 1] != '\0')/*used for characters between % and operator*/  
			{
				cont2 = 0;
				si_flags = 0;
				while (flags[cont2] != '\0' && si_flags == 0)
				{
					if (format[i + 1] == flags[cont2])
					{
						si_flags = 1;
						buffer_flags[*ip_flags] = format[i + 1];
						(*ip_flags)++;
					}
					cont2++;
				}
				if (si_flags == 0)
					more_buffer(buffer, ip, format[i + 1]);
				i++;
				get_formato = aux(format[i + 1]);
			}
			get_formato(ls, buffer, ip, buffer_flags);/* the most important- run the functions*/
			i++;
		}
		i++;
	}
	va_end(ls);
	write(1, buffer, *ip);
	return (ind);
}
