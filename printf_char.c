#include "main.h"

/**
 *printf_char- prints character
 *
 *@args: character argument
 *
 *Return: 1
 */

int printf_char(va_list args)
{
	int ch = va_arg(args, int);

	_putchar(ch);
	return (1);
}
