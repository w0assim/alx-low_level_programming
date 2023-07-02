#include "main.h"

/**
 * _print_rev_recursion -print reversed string
 * Return: none
 * @s: string
 */

void _print_rev_recursion(char *s)
{
	int i;
	char ptr;

	ptr = s;
	i = 0;
	while (ptr[i] != '\0')
	{
		i++;
		if (ptr[i] == '\0')
		{
			while (i > 0)
			{
				i--;
				_putchar(ptr[i]);
			}
		}
	}
}

