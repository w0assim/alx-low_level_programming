#include "main.h"

/**
 * clear_bit - bit to 0
 * @n: nbr
 * @index: index
 * Return: 1 -1
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int i;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	i = ~(1 << index);
	*n = *n & i;

	return (1);
}

