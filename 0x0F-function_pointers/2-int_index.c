#include "function_pointers.h"

/**
 *int_index -compare
 *@array: argument to compare
 *@size: size of the array
 *@cmp: function pointer
 *Return: cmp value or -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int x;

	if (array == NULL || cmp == NULL || size <= 0)
	{
		return (-1);
	}
	x = cmp(array);
	if (x < 0 || x > (size - 1))
	{
		return (-1);
	}
	else
	{
		return (x);
	}
}

