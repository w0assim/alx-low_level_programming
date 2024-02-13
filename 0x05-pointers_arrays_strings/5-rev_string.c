#include "main.h"
#include <string.h>


/**
 * rev_string - reverse a string
 * @s: string
 * Return: none
 */

void rev_string(char *s)
{
	char t;
	int i, j;

	for (i = 0, j = strlen(s) - 1; i <= j; i++, j--)
	{
		t = s[i];
		s[i] = s[j];
		s[j] = t;
	}
}
