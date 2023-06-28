#include "main.h"

/**
 * jack_bauer -time
 */

void jack_bauer(void)
{
	int a, b, c, d;

	a = '0';
	while (a != '0' + 3)
	{
		b = '0';
		while (b != '0' + 9)
		{
			c = '0';
			while (c != '0' + 6)
			{
				d = '0';
				while (d != '0' + 10)
				{
					if (a != '2' || b < '4')
					{
						_putchar(a);
						_putchar(b);
						_putchar(':');
						_putchar(c);
						_putchar(d);
						_putchar('\n');
					}
					d++;
				}
				c++;
			}
			b++;
		}
		a++;
	}
}

