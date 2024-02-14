#include "main.h"
#include <math.h>
#include <string.h>
#include <stdio.h>

/**
 * puts_half - print half string
 * @str: string
 * Return: none
 */

void puts_half(char *str)
{
	int i;

	for (i = ceil((double)strlen(str) / 2); str[i] != '\0'; i++)
	{
		putc(str[i], stdout);
	}
	putc('\n', stdout);
}
