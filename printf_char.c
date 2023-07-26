#include "main.h"

/**
 *printf_char- prints character
 *
 *@args: character argument
 *
 *Return: the character
 */

void printf_char(va_list args)
{
	int ch = va_arg(args, int);

	_putchar(ch);
}
