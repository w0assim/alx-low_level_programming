#include <stdio.h>
#include "main.h"

/**
 * more_numbers - print nbrs
 * Return: none
 */

void more_numbers(void)
{
	int i, j, y;

	for (i = 48, y = 0; y < 10; i++)
	{
		for (j = 47; j < 53; j++)
		{
			_putchar(i);
			if (i == 57 || j != 47)
			{
				if (i == 49)
				{
					_putchar(j);
				}
				i = 49;
			}
			else
			{
				break;
			}
		}
		if (j == 53)
		{
			i = 47;
			_putchar('\n');
			y++;
		}
	}
}
