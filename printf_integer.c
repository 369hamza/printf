#include "main.h"

/**
 *printf_integer - prints a signed integer
 *
 *@args: va_list containing the integer argument
 *
 *Return: number of character printed
 */
void printf_integer(va_list args)
{
        int num = va_arg(args, int);
        int num_digits = 1;
        int temp = num;
        int a;
        char buffer[12];

        if (num < 0)
        {
                _putchar('-');
                num = -num;
        }

        while (temp /= 10)
                num_digits++;

        a = num_digits;

        do
	{
                buffer[--a] = num % 10 + '0';
                num /= 10;
	} while (num);

        while (a < num_digits)
        {
                _putchar(buffer[a++]);
        }
}
