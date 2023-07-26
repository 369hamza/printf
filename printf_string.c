#include "main.h"

/**
 *printf_string- prints a string
 *
 *@args: string argument
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
