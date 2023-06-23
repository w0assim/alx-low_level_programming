#include <stdio.h>

/**
 *main - main
 *Return: none
 */

int main(void)
{
	int x;

	x = '0';
	while (x != '9' + 1)
	{
		putchar(x);
	}
	putchar('\n');
	return (0);
}

