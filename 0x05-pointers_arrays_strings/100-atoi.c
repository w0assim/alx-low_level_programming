#include <stdio.h>
#include <stdlib.h>

/**
 * _atoi - string to nb
 * @s: string
 * Return: int from s
 */

int _atoi(char *s)
{
	int i, n = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == '-')
		{
			n += 1;
		}
		if (s[i] >= '0' && s[i] <= '9')
		{
			break;
		}
	}
	if (n % 2 != 0)
	{
		n = -1;
		n *= atoi(&s[i]);
		return (n);
	}
	else
	{
		return (atoi(&s[i]));
	}
}
