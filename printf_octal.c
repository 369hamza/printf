#include "main.h"

/**
 *printf_octal- prints using a function helper print_num_base
 *
 *@args: argument
 *
 *Return: Length
 */
int printf_octal(va_list args)
{
	unsigned int num = va_arg(args, unsigned int);

	return (print_number_base(num, 8, 1));
}
