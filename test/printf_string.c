#include "main.h"

/**
 *print_string- prints a string
 *
 *@str: string
 */
void print_string(va_list *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
}
