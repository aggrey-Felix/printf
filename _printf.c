#include "main.h"

/**
 * check_spec - function to check which specifier to print
 * @format: string being passed
 * @print_arr: array of struct ops
 * @list: list of arguments to print
 * Return: numb of char to be printed
 */
int check_spec(const char *format, print_t *print_arr, va_list list)
{
	char a;
	int count = 0, b = 0, c = 0;

	a = format[b];
	while (a != '\0')
	{
		if (a == '%')
		{
			c = 0;
			b++;
			a = format[b];
			while (print_arr[c].t != NULL &&
			       a != *(print_arr[c].t))
				c++;
			if (print_arr[c].t != NULL)
				count = count + print_arr[c].f(list);
			else
			{
				if (a == '\0')
					return (-1);
				if (a != '%')
					count += _putchar('%');
				count += _putchar(a);
			}
		}
		else
			count += _putchar(a);
		b++;
		a = format[b];
	}
	return (count);
}

/**
 * _printf - prints output according to format
 * @format: string being passed
 * Return: char to be printed
 */
int _printf(const char *format, ...)
{
	va_list list;
	int a = 0;

	print_t spec[] = {
		{"c", print_c},
		{"s", print_s},
		{NULL, NULL}
	};

	if (format == NULL)
		return (-1);
	va_start(list, format);
	a = check_spec(format, spec, list);
	va_end(list);
	return (a);
}
