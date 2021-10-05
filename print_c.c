#include "main.h"

/**
 * c - function to return char
 * @c: list given
 * Return: number of char printed
 */
int print_c(va_list c)
{
	return (_putchar(va_arg(c, int)));
}
