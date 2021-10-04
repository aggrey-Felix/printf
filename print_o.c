#include "main.h"

/**
 * print_o - function to print octal
 * @o: list being passed
 * Return: updated count
 */
int print_o(va_list o)
{
	int count = 0, index;
	int *array;
	unsigned int n = va_arg(o, unsigned int);
	unsigned int tmp = n;

	while (n / 8 != 0)
	{
		n /= 8;
		count++;
	}
	count++;
	array = malloc(count * sizeof(int));
	for (index = 0; index < count; index++)
	{
		array[index] = tmp % 8;
		tmp /= 8;
	}
	for (index = count - 1; index >= 0; index--)
	{
		_putchar(array[index] + '0');
	}
	free(array);
	return (count);
}
