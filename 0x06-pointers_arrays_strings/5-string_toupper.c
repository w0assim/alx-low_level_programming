#include "main.h"

/**
 * string_toupper - make string uppercase
 * @s: string
 * Return: pointer to string
 */

char *string_toupper(char *s)
{
	char c;
	int i = 0;

	for (c = *s; (c = s[i]) != '\0'; i++)
	{
		if (c >= 'a' && c <= 'z')
		{
			s[i] = c - 32;
		}
	}
	return (s);
}
