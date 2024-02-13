#include "main.h"


/**
 * print_number - print number
 * @n: nb to print
 * Return: none
 */

void print_number(int n)
{
	int div = 10;

	if (n < 0)
	{
		_putchar('-');
	}
	while (div > 1 && (n >= 10 || n <= -10))
	{
		if (n < 0)
		{
			print_number(-1 * (n / div));
			n = -1 * (n - ((n / div) * div));
		}
		else
		{
			print_number(n / div);
			n -= (n / div) * div;
		}
		div = 1;
	}
	if (n < 0)
	{
		_putchar('0' - n);
		return;
	}
	else
	{
		_putchar('0' + n);
	}
}
