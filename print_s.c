#include "main.h"

/**
 * print_s - prints string to stdout
 * @s: list
 * Return: number of char
 */
int print_s(va_list s)
{
	int len;
	char *str;

	str = va_arg(s, char *);

	if (str == NULL)
		str = "(null)";
	len = 0;

	while (str[len] != '\0')
		len = len + _putchar(str[len]);
	return (len);
}
