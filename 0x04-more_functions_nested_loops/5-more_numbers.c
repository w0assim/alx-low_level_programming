#include <stdio.h>
#include "main.h"

/**
 * more_numbers - print nbrs
 * Return: none
 */

void more_numbers(void)
{
	for (int i = 0, j = 0; j < 10; i++)
	{
		_putchar(i);
		if (i == 14)
		{
			_putchar('\n');
			j++;
			i = 0;
		}
	}
}
