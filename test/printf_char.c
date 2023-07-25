#include "main.h"

/**
 *printf_char- prints character
 *
 *@character: list
 *
 *Return: the character
 */

int printf_char(va_list character)
{
	return (_putchar(va_arg(character, int)));
}
