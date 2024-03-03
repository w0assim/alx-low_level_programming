#include "main.h"
#include <unistd.h>
/**
 * leet - turn string into leet notation
 * @s: string to operate
 * Return: string modified
 */

char *leet(char *s)
{
	int i = 0, tmp;
	char a[127];

	a['A'] = '4';
	a['a'] = '4';
	a['O'] = '0';
	a['o'] = '0';
	a['L'] = '1';
	a['l'] = '1';
	a['E'] = '3';
	a['e'] = '3';
	a['T'] = '7';
	a['t'] = '7';
	while (s[i] != '\0')
	{
		if (s[i] == 'a' || s[i] == 'A' || s[i] == 'e' ||
		s[i] == 'E' || s[i] == 'o' || s[i] == 'O' || s[i] == 't' || s[i] == 'T'
		|| s[i] == 'l' || s[i] == 'L')
		{
			tmp = (int)s[i];
			s[i] = a[tmp];
		}
		i++;
	}
	return (s);
}
