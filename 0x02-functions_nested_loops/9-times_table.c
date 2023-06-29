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
			if (z < 10)
			{
				putchar('0' + z);
				putchar(',');
				putchar(' ');
				putchar(' ');
			}
			else
			{
				putchar('0' + z / 10);
				putchar('0' + z % 10);
				putchar(',');
				putchar(' ');
				putchar(' ');
			}
			putchar('\n');
		}
	}
	putchar('\n');
}

