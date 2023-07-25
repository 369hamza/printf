#include "main.h"

/**
 *print_string- prints a string
 *
 *@str: string
 */
void print_string(va_list str)
{
	char *s = va_arg(*str, char *);

	if (s == NULL)
	{
		return;
	}
	while (*s != '\0')
	{
		_putchar(*str);
		str++;
	}
}
