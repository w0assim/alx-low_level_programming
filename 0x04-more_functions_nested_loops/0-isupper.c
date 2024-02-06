#include <ctype.h>

/**
 * _isupper - check upperCASE
 * @c: char to check
 * Return: 0/1
 */

int _isupper(int c)
{
	if (!(isupper(c)))
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
