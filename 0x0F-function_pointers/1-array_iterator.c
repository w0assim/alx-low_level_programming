#include "function_pointer.h"

/**
 *array_iterator -array execution function
 *@array: array to execute on iteratively
 *@size: size of the array
 *@action: pointer to function to be executed
 *Return NONE
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	for (int i = 0; i < size; i++)
	{
		action(array[i]);
	}
}

