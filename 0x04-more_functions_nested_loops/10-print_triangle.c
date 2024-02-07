#include "main.h"

/**
 * print_triangle - prints a triangle shape in terminal
 * @size: height of triangle
 */

void print_triangle(int size)
{
	int i, j, m;

	for (i = 1; i <= size; i++)
	{
		for (j = i; j <= size; j++)
		{
			_putchar(' ');
		}
		for (m = 1; m <= i; m++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
	if (i == 1)
	{
		_putchar('\n');
	}
}
