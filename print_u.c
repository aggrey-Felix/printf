#include "main.h"

/**
 * print_u - unsigned int print to stdout
 * @u: list being passed
 * Return: Number of characters printed
 */
int print_u(va_list u)
{
	unsigned int x;
	int pow = 1;
	int len = 0;

	x = va_arg(u, unsigned int);

	while (x / pow > 9)
		pow *= 10;
	while (pow != 0)
	{
		len += _putchar(x / pow + '0');
		x = x % pow;
		pow = pow / 10;
	}
	return (len);
}
