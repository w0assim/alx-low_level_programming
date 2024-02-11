#include "main.h"

/**
 * print_number - print a number
 * @n: nb to print
 * Return: none
 */

void print_number(int n)
{
	int div = 10;

	if (n < 0)
	{
		_putchar('-');
		n *= -1;
	}
	if (n < 10)
	{
		_putchar('0' + n);
		return;
	}
	while (1)
	{
		print_number(n / div);
		n -= (n / div) * div;
		div /= 10;
		if (div == 0)
		{
			return;
		}
	}
}
