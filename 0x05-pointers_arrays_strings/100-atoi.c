#include <stdio.h>
#include <stdlib.h>

/**
 * _atoi - string to nb
 * @s: string
 * Return: int from s
 */

int _atoi(char *s)
{
	int i, n = 1;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == '-')
		{
			n = -1;
		}
	}
	if (atoi(s) < 0)
	{
		return (atoi(s));
	}
	return (n * atoi(s));
}
