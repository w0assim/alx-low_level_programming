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
		while (b != '0' + 4)
		{
			c = '0';
			while (c != '0' + 6)
			{
				d = '0';
				while (d != '0' + 10)
				{
					_putchar(a);
					_putchar(b);
					_putchar(':');
					_putchar(c);
					_putchar(d);
					d++;
				}
				_putchar('\n');
				c++;
			}
			b++;
		}
		a++;
	}
}

