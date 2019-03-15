/**
 *R - return rot
 *@rot: rot13
 *Return: rot13
 */
int R(va_list rot13)
{
	char *a;
	int b = 0;
	int c = 0;

	a = va_arg(rot13, char *);
	if (a == NULL)
	return (-1);
	while (a[b] != '\0')
	{
	if ((a[b] >= 'a' && a[b] <= 'z') || (a[b] >= 'A' && a[b] <= 'Z'))
	{
	c = c + _putchar(s[a] - 13);
	else
	c = c + _putchar(s[a] + 13);
	}
	else
	c = c + _putchar(s[a]);
	b++;
	}
	return (c);
}
