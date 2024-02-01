#include "main.h"

/**
 * print_alphabet -alpha print
 */

void print_alphabet(void)
{
	char c;

	c = 'a';
	while (c != 'z' + 1)
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}

