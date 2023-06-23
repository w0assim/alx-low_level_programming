#include "function_pointers.h"

/**
 *array_iterator -array execution function
 *@array: array to execute on iteratively
 *@size: size of the array
 *@action: pointer to function to be executed
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	if (array != NULL && action != NULL && size != 0)
	{
		for (i = 0; i < (int)size; i++)
		{
			action(array[i]);
		}
	}
}

