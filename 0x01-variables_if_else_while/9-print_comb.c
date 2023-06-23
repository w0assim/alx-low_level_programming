#include <stdio.h>

/**
 * main - main
 * Return: return
 */

int main(void)
{
	int x, i;

	x = '0';
	for (i = 0; i < 9; i++)
	{
		putchar(x);
		putchar(',');
		putchar(' ');
		x++;
	}
	x++;
	putchar(x);
	return (0);
}

