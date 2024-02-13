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
	int j = strlen(s);
	char r_s[j];
	int i;

	for (i = strlen(s) - 1; i >= 0; i--)
	{
		r_s[strlen(s) - i] = s[i];
	}
	puts(r_s);
}
