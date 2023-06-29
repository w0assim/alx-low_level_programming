#include "main.h"

/**
 * print_times_table -time table
 * @n: n table
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
		for (y = 0; y < n + 1; y++)
		{
			z = x * y;
			if (y ==0)
			{
				_putchar('0');
				_putchar(',');
				_putchar(' ');
			}
			else if (z > 0 && z < 10)
			{
				_putchar(' ');
				_putchar(' ');
				_putchar('0' + z);
				if (y != n)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
			else if (z > 9 && z < 100)
			{
				_putchar(' ');
				_putchar('0' + z / 10);
				_putchar('0' + z % 10);
				if (y != n)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
			else
			{
				_putchar('0' + (z / 10) / 10);
				_putchar('0' + (z / 10) % 10);
				_putchar ('0' + z % 10);
				if (y != n)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
		}
		_putchar('\n');
	}
}

