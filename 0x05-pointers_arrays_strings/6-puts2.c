#include "main.h"
#include <stdio.h>

/**
 * puts2 - print every other character on string
 * @str: string to print
 * Return: none
 */

void puts2(char *str)
{
	int i, j;

	for (i = 0, j = 0; str[i] != '\0' && str[j] != '\0'; i += 2, j++)
	{
		putc(str[i], stdout);
		j = i;
	}
	putc('\n', stdout);
}
