#include "main.h"

/**
 * puts_half - print half string
 * @str: string
 * Return: none
 */

void puts_half(char *str)
{
	int i, j;

	for (i = 0; str[i] != '\0'; i++)
	{
	}
	if (i % 2 == 0)
	{
		j = (i - 1) / 2;
	}
	else
	{
		j = ((double)i / 2) + 1;
	}
	for (; j < i; j++)
	{
		putc(str[j], stdout);
	}
}
