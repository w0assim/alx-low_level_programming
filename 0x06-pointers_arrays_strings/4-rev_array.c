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

	for (i = n; n - i < i; i--)
	{
		tmp = a[i];
		a[i] = a[n-i];
		a[n-i] = tmp;
	}
}
