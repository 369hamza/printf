#include "main.h"

/**
 *printf_unsigned_int- prints unsigned int
 *
 *@args: un int argument
 *
 *Return: length
 */
int printf_unsigned_int(va_list args)
{
	unsigned int num = va_arg(args, unsigned int);

	return (number_rec(num));
}
