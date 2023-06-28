#include "main.h"

/**
 * print_last_digit -last digit
 * @x: number
 * Return: last digit
 */

int print_last_digit(int x)
{
	int last_digit;

	x = abs(x);
	last_digit = x % 10;
	_putchar('0' + last_digit);
	return (48 + last_digit);
}

