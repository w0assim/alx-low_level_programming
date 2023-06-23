#include <stdio.h>

/**
 *main -main
 *Return: 0
 */

int main(void)
{
	char c;
	int i;

	c = '0';
	for (i = 0; i < 16; i++)
	{
		if (c == '9')
		{
			putchar(c);
			c = 'a';
		}
		else
		{
			putchar(c);
			c++;
		}
	}
	putchar('\n');
}

