#include "main.h"

/**
 * convert_to_hex - converts a decimal number to hex
 * @n: number to be converted
 * @base: base of 16 being passed
 * @alpha: Char 'A' to 'F' or 'a' to 'f'
 * Return: number of chars printed
 */
int convert_to_hex(unsigned int n, unsigned int base, char alpha)
{
	unsigned int remainder = n % base;
	unsigned int quotient = n / base;
	char c;

	if (remainder > 10)
		c = (remainder - 10) + alpha;
	else
		c = remainder + '0';
	if (quotient == 0)
	{
		return (_putchar(c));
	}
	if (quotient < base)
	{
		if (quotient > 10)
			return (_putchar(quotient - 10 + alpha) + _putchar(c));
		return (_putchar(quotient + '0') + _putchar(c));
	}
	return (convert_to_hex(quotient, base, alpha) + _putchar(c));
}

/**
 * print_x - Prints a hexadecimal number in lowercase notation
 * @x: Argument to be printed in lowercase hex notation
 * Return: Number of characters printed
 */
int print_x(va_list x)
{
	return (convert_to_hex(va_arg(x, unsigned int), 16, 'a'));
}

/**
 * print_X - Prints a number in upercase hexadecimal notation
 * @X: Argument to be printed
 * Return: Number of characters printed
 */
int print_X(va_list X)
{
	return (convert_to_hex(va_arg(X, unsigned int), 16, 'A'));
}
