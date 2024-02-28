#include "main.h"

/**
 * cap_string - capitalize string
 * @s: string
 * Return: ptr to string
 */

char *cap_string(char *s)
{
	char c;
	int i = 0;

	for (c = *s; (c = s[i]) != '\0'; i++)
	{
		if (c == ',' || c ==';' || c == '.' ||
		c == '!'|| c == '?' || c == '"' || c ==
		'(' || c == ')' || c == '{' || c == '}'
		|| c == '\t' || c == '\n' || c == ' ')
		{
			c = s[i + 1];
			if (c == '\0')
			{
				break;
			}
			else if (c >= 'a' && c <= 'z')
			{
				i++;
				s[i] = c - 32;
			}
		}
	}
	return (s);
}
