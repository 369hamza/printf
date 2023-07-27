#include "main.h"

/**
 *printf_string- prints a string
 *
 *@args: string argument
 *
 *Return: count
 */
int printf_string(va_list args)
{
	char *s = va_arg(args, char *);
	int count = 0;

	if (s == NULL)
	{
		return (0);
	}
	while (*s != '\0')
	{
		_putchar(*s);
		s++;
		count++;
	}
	return (count);
}
