#include "main.h"

/**
 * set_bit - bit to 1 at given index
 * @index: index
 * @n: ptr
 * Return: 1, -1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int i;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	i = 1 << index;
	*n = *n | i;

	return (1);
}

