#ifndef _MAIN_H_
#define _MAIN_H_

#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * struct print - structure for printing various types
 * @t: type to print
 * @f: function to print
 */
typedef struct print
{
	char *t;
	int (*f)(va_list);
} print_t;


int _putchar(char c);
int _printf(const char *format, ...);
int check_spec(const char *format, print_t *print_arr, va_list list);
int print_c(va_list c);
int print_s(va_list s);
int print_l(va_list l);
int hex_print(char c);
int print_h(va_list h);
int print_i(va_list i);
int print_d(va_list d);
int print_u(va_list u);
int print_b(va_list b);
int print_o(va_list o);
int convert_to_hex(unsigned int n, unsigned int base, char alpha);
int print_x(va_list x);
int print_X(va_list X);
int print_p(va_list p);
int print_S(va_list S);
int print_r(va_list r);
int print_R(va_list R);
int _putchar2(char c);

#endif  /* _MAIN_H */
