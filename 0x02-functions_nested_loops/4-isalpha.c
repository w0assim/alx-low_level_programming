#include "main.h"

/**
 * _isalpha -alpha check
 * Return: int
 * @c: char
 */

int _isalpha(int c)
{
	if (isalpha(c) == 1)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

