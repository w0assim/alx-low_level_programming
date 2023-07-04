#include "main.h"

/**
 * _print_rev_recursion -print reversed string
 * Return: none
 * @s: string
 */

void _print_rev_recursion(char *s)
{
	char *ptr;
	int i;

	ptr = s;
	if (i)
	{
		if (i == 0 && ptr[i] == '\0')
			return;
		if (ptr[i] == '\0')
		{
			i--;
			_putchar(ptr[i]);
			s[i] = '\0';
			_print_rev_recursion(s);
		}
		else
		{
			i++;
			_print_rev_recursion(s);
		}
	}
	else
	{
		i = 0;
	}
}

