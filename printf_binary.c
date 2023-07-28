#include "main.h"
/**
 *printf_binary- prints use a function helper binary
 *
 *@args: argument
 *
 *Return: Length
 */
int printf_binary(va_list args)
{
	unsigned int num = va_arg(args, unsigned int);
	
	return (print_number_base(num, 2, 0));
}
