#include "main.h"

/**
 *printf_integer - prints a signed integer
 *
 *@args: va_list containing the integer argument
 *
 *Return: number of character printed
 */
int printf_integer(va_list args)
{
	int num = va_arg(args, int);
	int num_digits = 0;
	unsigned int absolute;

	if (num < 0)
	{
		_putchar('-');
		absolute = num * -1;
		num_digits++;
	}
	else
	{
		absolute = num;
	}

	num_digits += number_rec(absolute);

	return (num_digits);
}
