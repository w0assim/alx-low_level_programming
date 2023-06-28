#include "main.h"

/**
 * print_last_digit -last digit
 * @x: number
 * Return: last digit
 */

int print_last_digit(int x)
{
	int last_digit;

	last_digit = x % 10;
	_putchar(last_digit);
	return (last_digit);
}

