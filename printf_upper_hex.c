#include "main.h"
/**
 *printf_upper_hex- prints hexadecimal using function helper
 *
 *@args: va_list that contains uns int to be printed
 *
 *Return: Length
 *
 */
int printf_upper_hex(va_list args)
{
	unsigned int num = va_arg(args, unsigned int);

	return (print_number_base(num, 16, 0));
}
