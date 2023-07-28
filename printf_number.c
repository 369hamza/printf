#include "main.h"
/**
 *print_number_base - Prints an unsigned integer in a specified base.
 *
 *@n: The unsigned integer to be printed
 *@base: The base in which to print the number
 *@uppercase: If zero
 * 
 *Return: Length
 */
int print_number_base(unsigned int n, int base, int uppercase)
{
	char *digits = uppercase ? "0123456789ABCDEF" : "0123456789abcdef";
	int printed = 0;

	if (n == 0)
	{
		_putchar('0');
		printed++;
	}
	else
	{
		if (n / base)
		{
			printed += print_number_base(n / base, base, uppercase);
		}
		_putchar(digits[n % base]);
		printed++;
	}
	return (printed);
}
