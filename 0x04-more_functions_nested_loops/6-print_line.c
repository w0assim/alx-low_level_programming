#include "main.h"

/**
 * print_line - print line in terminal
 * @n: number of - printed
 * Return: none
 */

void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
