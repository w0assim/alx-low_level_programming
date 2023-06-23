#include <stdio.h>

/**
 *main - main
 *Return: 0
 */

int main(void)
{
	char c;

	c = 'z';
	while (c != 'a' - 1)
	{
		putchar(c);
		c++;
	}
	putchar('\n');
}

