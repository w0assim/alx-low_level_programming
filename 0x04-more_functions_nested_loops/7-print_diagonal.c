#include "main.h"

/**
 * print_diagonal - print '/' diagonaly in terminal
 * @n: number of prints
 * Return: none
 */

void print_diagonal(int n)
{
	int i, j;

	for (i = 0; i < n; i ++)
	{
		for (j = i; j < 0; j++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
	_putchar('\n');
}
