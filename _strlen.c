#include "holberton.h"
/**
 * _strlen - lenght of a string.
 * @s : string
 * Return: Always 0.
 */
int _strlen(char *s)
{
	int n = 0;

	while (s[n] != '\0')
	n++;
	return (n);
}
