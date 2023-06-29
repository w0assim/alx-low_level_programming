#include "main.h"

/**
 * print_times_table -time table
 * @n: table
 */

void print_times_table(int n)
{
	int x, y, z;

	if (n < 0 || n > 15)
	{
		return;
	}
	for (x = 0; x < n + 1; x++)
	{
		_putchar('0');
		for (y = 1; y < n + 1; y++)
		{
			z = x * y;
			if (n != 0)
			{
				_putchar(',');
				_putchar(' ');
			}
			if (z < 10)
			{
				_putchar(' ');
				_putchar(' ');
				_putchar('0' + z);
			}
			else if (z < 100)
			{
				_putchar(' ');
				_putchar('0' + z / 10);
				_putchar('0' + z % 10);
			}
			else
			{
				_putchar('0' + (z / 10) / 10);
				_putchar('0' + (z / 10) % 10);
				_putchar('0' + z % 10);
			}
		}
		_putchar('\n');
	}
}

