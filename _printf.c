#include <stdio.h>
#include "main.h"

const fn_spec_t format_f[] = {
		{'c', printf_char},
		{'s', printf_string},
		{'%', printf_percent},
		{'i', printf_integer},
		{'d', printf_integer},
};

/**
 *_printf- acts like printf
 *
 *@format: string that contains the text to be written to stdout
 *
 *Return: length of format
 */

int _printf(const char *format, ...)
{
	int i, j;
	va_list args;
	int total_char = 0;

	va_start(args, format);

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			i++;
			for (j = 0; j < 5; j++)
			{
				if (format[i] == format_f[j].specifier)
				{
					total_char += format_f[j].f(args);
					break;
				}
			}
		}
		else
		{
			_putchar(format[i]);
			total_char++;
		}
	}
	va_end(args);
	return (total_char);
}
