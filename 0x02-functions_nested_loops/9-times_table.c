#include "main.h"

/**
 * times_table -mul table
 */

void times_table(void)
{
	int x, y, z;

	for (x = 0; x < 10; x++)
	{
		for (y = 0; y < 10; y++)
		{
			z = x * y;
			if (y == 0 || x == 0)
			{
				_putchar('0');
				if (y != 9)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
			else if (z < 10)
			{
				_putchar(' ');
				_putchar('0' + z);
				if (y != 9)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
			else
			{
				_putchar('0' + (z / 10));
				_putchar('0' + (z % 10));
				if (y != 9)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
		}
		_putchar('\n');
	}
	_putchar('\n');
}

