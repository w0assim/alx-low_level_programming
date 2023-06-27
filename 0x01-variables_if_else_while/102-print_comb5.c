#include <stdio.h>

/**
 *main - main function
 *Return: none
 */

int main(void)
{
	int a, b, c, d;

	for (a = '0'; a < '9' + 1; a++)
	{
		for (b = '0'; b <= '9'; b++)
		{
			c = a;
			d = b + 1;
			while (c < '9' + 1)
			{
				while (d < '9' + 1)
				{
					putchar(a);
					putchar(b);
					putchar(' ');
					putchar(c);
					putchar(d);
					if (c != 9 || d != 9)
					{
						putchar(',');
						putchar(' ');
					}
					d++;
				}
				d = 0;
				c++;
			}
		}
	}
	putchar('\n');
	return (0);
}

