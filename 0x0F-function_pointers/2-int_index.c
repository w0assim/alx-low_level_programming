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
	int x, i, cmpt;

	if (array == NULL || cmp == NULL || size <= 0)
	{
		return (-1);
	}
	i = 0;
	cmpt = -1;
	while (i++ < size - 1)
	{
		x = cmp(array[i]);
		if (x == 1)
		{
			cmpt = i;
			break;
		}
	}
	if (cmpt < 0 || cmpt > (size - 1))
	{
		return (-1);
	}
	else
	{
		return (cmpt);
	}
}

