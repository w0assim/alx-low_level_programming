#include "main.h"

/**
 * _islower -check
 * Return: int
 * @c: arg
 */

int _islower(int c)
{
	if (islower(c) != 0)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

