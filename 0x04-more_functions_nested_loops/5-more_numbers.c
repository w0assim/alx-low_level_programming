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
		for (j = 48; j < 53; j++)
		{
			_putchar(i);
			if (i == 57 || j != 48)
			{
				i = 49;
				_putchar(j);
			}
			else
			{
				break;
			}
		}
		if (j == 52)
		{
			_putchar('\n');
			y++;
		}
	}
}
