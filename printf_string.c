#include "main.h"

/**
 *print_string- prints a string
 *
 *@str: string
 */
void printf_string(va_list args)
{
        char *s = va_arg(args, char *);

        if (s == NULL)
        {
                return;
        }
        while (*s != '\0')
        {
                _putchar(*s);
                s++;
        }
}
