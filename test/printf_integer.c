#include "main.h"

/**
 * printf_integer - prints a signed integer
 *
 * @args: va_list containing the integer argument
 */
void printf_integer(va_list args)
{
	int num = va_arg(args, int);

	if (num < 0)
	{
		_putchar('-');
		num = -num;
	}
	int num_digits = 1;
	int temp = num;

	while (temp /= 10)
		num_digits++;
	char buffer[12];
	int a = num_digits;

	do {
		buffer[--a] = num % 10 + '0';
		num /= 10;
	} while (num);

	while (a < num_digits)
	{
		_putchar(buffer[i++]);
	}
}
