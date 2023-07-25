#include "main.h"

/**
 * printf_integer - prints an integer
 *
 * @args: list
 */
void printf_integer(va_list args)
{
    int num = va_arg(args, int);

    // For simplicity, you can use a temporary buffer for conversion
    char buffer[20];
    int length = sprintf(buffer, "%d", num);

    for (int i = 0; i < length; i++)
    {
        _putchar(buffer[i]);
    }
}
