#include "main.h"

/**
 * reverse_array - reverses array of ints
 * @a: array of ints
 * @n: number of elements in array
 * Return: none
 */

void reverse_array(int *a, int n)
{
	int i, tmp;

	for (i = n - 1; n - 1 - i < i; i--)
	{
		tmp = a[i];
		a[i] = a[n-1-i];
		a[n-1-i] = tmp;
	}
}
