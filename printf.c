#include "holberton.h"
/**
 *_printf - print
 * @format: string
 * Return: char
 */
int _printf(const char *format, ...)
{
	va_list a;
	int z = 0;

	formato_t ops[] = {
	{"c", c},
	{"s", s},
	{"d", in},
	{"i", in},
	{"b", b},
	{"u", u},
	{"o", o},
	{"x", x},
	{"X", X},
	{"R", R},
	{"S", Upper_S},
	{"p", p_ptr},
	{NULL, NULL}
	};

	if (format == NULL)
		return (-1);
	va_start(a, format);
	z = aux(format, ops, a);
	va_end(a);
	return (z);
}
/**
 *aux - print aux
 * @format: string
 * @a: parameters
 * @aux: aux
 * Return: char
 */
int aux(const char *format, formato_t *auxiliar, va_list a)
{
	char b;
	int c = 0;
	int d = 0;
	int e = 0;
	int flag_match = 0;

	char B_OTHERS[50];
        char *PTR_OTHERS;

	b = format[c];
	while (b != '\0')
	{
		PTR_OTHERS = &B_OTHERS[0];
		if (b == '%')
		{
			while (flag_match == 0)
			{
				d = 0;
				c++;
				b = format[c];
				while (auxiliar[d].fo != NULL && b != *(auxiliar[d].fo)) //busca en la estructura el op con el siguiente a % hasta que se acabe la estructura.  
				{
					d++;
				}
				if (auxiliar[d].fo != NULL) // cuando encuentra el match entonces verifica que no es NULL 
				{
					flag_match = 1; // bandera que avisa que ya hizo match entre estrucutura y cadena 
					*++PTR_OTHERS = '\0'; // inserto fin de cadena cuando encuentra match
					e = e + auxiliar[d].p(a); //llama a la funcion de acuerdo al operador 
//					printf("Acaba de hacer match con por/d: %s\n", B_OTHERS);
				}
				else
				{
					switch (b)
					{
					case '\0' : return (-1); // cuando no hace match retorna -1
						break;
					case '%' : e += _putchar('%'); // cuando es %% print %
						break;
					case '+' : *++PTR_OTHERS = b;//almaceno en b_others todas las flags / width / precision & lenght. Apuntado por ptr_others
						break;
					case ' ' : *++PTR_OTHERS = b;//almaceno en b_others todas las flags / width / precision & lenght. Apuntado por ptr_others
						break;
					case '#' : *++PTR_OTHERS = b;//almaceno en b_others todas las flags / width / precision & lenght. Apuntado por ptr_others
						break;
					case 'l' : *++PTR_OTHERS = b;//almaceno en b_others todas las flags / width / precision & lenght. Apuntado por ptr_others
						break;
					case 'h' : *++PTR_OTHERS = b;//almaceno en b_others todas las flags / width / precision & lenght. Apuntado por ptr_others
						break;
					case '-' : *++PTR_OTHERS = b;//almaceno en b_others todas las flags / width / precision & lenght. Apuntado por ptr_others
						break;
					case '.' : *++PTR_OTHERS = b;//almaceno en b_others todas las flags / width / precision & lenght. Apuntado por ptr_others
                                                break;
					case '0' : *++PTR_OTHERS = b;//almaceno en b_others todas las flags / width / precision & lenght. Apuntado por ptr_others
						break;
					case '1' : *++PTR_OTHERS = b;//almaceno en b_others todas las flags / width / precision & lenght. Apuntado por ptr_others
                                                break;
					case '2' : *++PTR_OTHERS = b;//almaceno en b_others todas las flags / width / precision & lenght. Apuntado por ptr_others
                                                break;
					case '3' : *++PTR_OTHERS = b;//almaceno en b_others todas las flags / width / precision & lenght. Apuntado por ptr_others
                                                break;
					case '4' : *++PTR_OTHERS = b;//almaceno en b_others todas las flags / width / precision & lenght. Apuntado por ptr_others
                                                break;
					case '5' : *++PTR_OTHERS = b;//almaceno en b_others todas las flags / width / precision & lenght. Apuntado por ptr_others
                                                break;
					case '6' : *++PTR_OTHERS = b;//almaceno en b_others todas las flags / width / precision & lenght. Apuntado por ptr_others
                                                break;
					case '7' : *++PTR_OTHERS = b;//almaceno en b_others todas las flags / width / precision & lenght. Apuntado por ptr_others
                                                break;
					case '8' : *++PTR_OTHERS = b;//almaceno en b_others todas las flags / width / precision & lenght. Apuntado por ptr_others
                                                break;
					case '9' : *++PTR_OTHERS = b;//almaceno en b_others todas las flags / width / precision & lenght. Apuntado por ptr_others
                                                break;						
//					default: e += _putchar(b);
					}
				}
			}	
		}// el del if == % 
		else
		e += _putchar(b); //imprima cuando b != % la cadena principal
	c++;
	b = format[c];
	}// el de la iteracion hasta el nulo 
return (e);
}
