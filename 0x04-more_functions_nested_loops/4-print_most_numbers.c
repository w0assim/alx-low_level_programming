#include "main.h"

/**
 * print_most_numbers - print 0 to 9, no 2 & 4
 * Return: none
 */

void print_most_numbers(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		if (i != 50 && i != 52)
		{
			_putchar(i);
		}
	}
	_putchar('\n');
}
