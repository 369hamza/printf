#include <stdio.h>
#include "main.h"

/**
 *main- entry point
 *
 *Return: 0
 */
int main(void)
{
	int number = 12345;
	char *str = "Hello, World!";
	char c = 'A';
	int chars_printed = 0;

	chars_printed += _printf("String: %s\n", str);
	chars_printed += _printf("Character: %c\n", c);
	chars_printed += _printf("Integer: %i\n", number);
	chars_printed += _printf("Integer: %d\n", number);
	chars_printed += _printf("Percent sign: %%\n");
	_printf("Total characters printed: %d\n", chars_printed);
	return (0);
}
