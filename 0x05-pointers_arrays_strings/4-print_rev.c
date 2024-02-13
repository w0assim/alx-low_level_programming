#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * print_rev - print string reverse
 * @s: string
 * Return: none
 */

void print_rev(char *s)
{
	int i;

	for (i = strlen(s) - 1; i >= 0; i--)
	{
		printf("%c", s[i]);
	}
}
