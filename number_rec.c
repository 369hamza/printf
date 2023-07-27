#include "main.h"

/**
 *number_rec- function helper prints degits recursively
 *
 *@n: unsigned int
 *
 *Return: count
 */
int number_rec(unsigned int n)
{
	unsigned int number = n;
	int count = 0;

	if (number / 10)
		count += number_rec(number / 10);

	_putchar((number % 10) + '0');

	return (count + 1);
}
