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
