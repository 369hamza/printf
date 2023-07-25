#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>

/**
 * struct fn_spec - structure of function specifier
 *
 * @specifier: format specifier
 * @f: the function to a specific specifier
 */
typedef struct fn_spec {
    char specifier;
    void (*f)(va_list args);
} fn_spec_t;

int _printf(const char *format, ...);
int _putchar(char c);
void printf_char(va_list args);
void printf_string(va_list args);
void printf_percent(va_list args);
void printf_integer(va_list args);

#endif /* MAIN_H */
