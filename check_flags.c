#include "holberton.h"

int check_flags(char *buffer_flags)
{
	int i = 0, ret_flag = 0;
	int si_espacio = 0, si_numeral = 0, si_mas = 0;

	while  (buffer_flags[i] != '\0')
	{
		if (buffer_flags[i] == '+')
			si_mas = 1;
		if (buffer_flags[i] == ' ')
			si_espacio = 1;
		if (buffer_flags[i] == '#')
			si_numeral = 1;
		i++;
	}
	ret_flag = si_espacio * 1 + si_numeral * 2 + si_mas * 4;
	return (ret_flag);
}
