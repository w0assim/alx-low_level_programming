#include <stdio.h>

/**
 *main - main function
 *Return: always 0
 */

int main(void)
{
	char c;

	c = 'a';
	while (c != ('z' + 1))
	{
		putchar(c);
		c++;
	}
	c = 'A';
	while (c != ('Z' + 1))
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}

