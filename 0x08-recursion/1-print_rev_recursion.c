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
	i = 0;
	while (*ptr != NULL)
	{
		i++;
		ptr++;
	}
	if (i = 0)
	{
		return;
	}
	else
	{
		_putchar(ptr[i - 1]);
		s[i - 1] = '\0';
		return (_print_rev_recursion(s));
	}
}

