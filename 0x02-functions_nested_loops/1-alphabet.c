#include "main.h"

/**
 * print_alphabet -alpha prin
 */

void print_alphabet(void)
{
	char c;

	c = 'a';
	while (c != 'z' + 1)
	{
		_putchar(c);
	}
	_putchar('\n');
}

