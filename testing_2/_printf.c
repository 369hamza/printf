#include "main.h"

const fn_spec_t format_f[] = {
    {'c', printf_char},
    {'s', printf_string},
    {'%', printf_percent},
    {'d', printf_integer},
    {'\0', NULL}
};

// ... Rest of the code remains the same
