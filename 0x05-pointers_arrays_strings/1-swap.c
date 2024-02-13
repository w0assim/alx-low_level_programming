#include "main.h"

/**
 * swap_int - swap values
 * @a: int 1
 * @b: int 2
 * Return: none
 */

void swap_int(int *a, int *b)
{
	int *tmp;

	*tmp = *a;
	*a = *b;
	*b = *tmp;
}
