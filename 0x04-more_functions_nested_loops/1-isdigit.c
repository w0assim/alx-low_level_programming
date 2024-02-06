#include <ctype.h>
#include "main.h"

/**
 * _isdigit - check if digit
 * @c: char to check
 * Return: 0/1
 */

int _isdigit(int c)
{
	if (!(isdigit(c)))
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
