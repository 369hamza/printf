#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>

/**
 *struct fn_spec- stracture of function specifier
 *
 *@specifier: format specifier
 *@f: the function to a specific specifier
 *
 */
typedef struct fn_spec
{
	char specifier;
	int (*f)(va_list args);
} fn_spec_t;


#define BUFFER_SIZE 1024

/*helper functions */
int _putchar(char c);
int number_rec(unsigned int n);
int print_number_base(unsigned int num, int base, int upper);

/*main functions */
int _printf(const char *format, ...);
int printf_char(va_list args);
int printf_string(va_list args);
int printf_percent(va_list args);
int printf_integer(va_list args);
int printf_binary(va_list args);
int printf_unsigned_int(va_list args);
int printf_octal(va_list args);
int printf_hex(va_list args);
int printf_upper_hex(va_list args);


#endif
