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
typedef struct fn_spec {
	char specifier;
	void (*f)(va_list args);
} fn_spec_t;


#define BUFFER_SIZE 1024

int _printf(const char *format, ...);
int _putchar(char c);
void printf_char(va_list args);
void printf_string(va_list args);
void printf_percent(va_list args);
void printf_integer(va_list args);


#endif
