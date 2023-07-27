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
 *loop_formats- this a way to get small code
 *
 *@format: string that contain the text
 *@args: argument
 *
 *Return: total_char
 */
int loop_formats(const char *format, va_list args)
{
	int found_specifier = 0;
	int total_char = 0;
	int i, j;

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			i++;
			if (format[i] == '\0')
			{
				return (-1);
			}
			for (j = 0; j < 5; j++)
			{
				if (format[i] == format_f[j].specifier)
				{
					total_char += format_f[j].f(args);
					found_specifier = 1;
					break;
				}
			}
			if (!found_specifier)
			{
				_putchar('%');
				_putchar(format[i]);
				total_char += 2;
			}
		}
		else
		{
			_putchar(format[i]);
			total_char++;
		}
	}
	return (total_char);
}

/**
 *_printf- acts like printf
 *
 *@format: string that contains the text to be written to stdout
 *
 *Return: length of format
 */
int _printf(const char *format, ...)
{
	va_list args;
	int total_char = 0;

	va_start(args, format);
	if (format == NULL)
	{
		va_end(args);
		return (0);
	}
	total_char = loop_formats(format, args);
	va_end(args);
	return (total_char);
}
