#include <stdio.h>

/**
 * main -main function
 * Return: always 0
 */

int main(void)
{
	int x, y;

	for (x = '0'; x < '9'; x++)
	{
		y = 1 + x;
		if (y == x)
		{
			y++;
		}
		while (y < '9' + 1 && y != x)
		{
			putchar(x);
			putchar(y);
			if (x != '8' || y != '9')
			{
				putchar(',');
				putchar(' ');
			}
			y++;
		}
	}
	putchar('\n');
	return (0);
}

