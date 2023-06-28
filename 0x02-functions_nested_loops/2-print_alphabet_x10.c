#include "main.h"

/**
 * print_alphabet_x10 -alp
 */

void print_alphabet_x10(void)
{
	int cpt;
	char c;

	for (cpt = 0; cpt < 10; cpt++)
	{
		c = 'a';
		while (c != 'z' + 1)
		{
			_putchar(c);
			c++;
		}
		_putchar('\n');
	}
}

