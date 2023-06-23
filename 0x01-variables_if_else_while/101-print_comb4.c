#include <stdio.h>

/**
 *main -test
 *Return: 0
 */

int main(void)
{
	int x, y, z;

	for (x = '0'; x < '8'; x++)
	{
		y = 1 + x;
		z = 1 + y;
		while (y < '9')
		{
			while (z < '9' + 1)
			{
				putchar(x);
				putchar(y);
				putchar(z);
				if (x != '7' || y != '8' || z != '9')
				{
					putchar(',');
					putchar(' ');
				}
				z++;
			}
			y++;
		}
	}
	putchar('\n');
	return (0);
}

