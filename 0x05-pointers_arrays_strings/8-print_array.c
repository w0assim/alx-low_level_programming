#include "main.h"
#include <stdio.h>

/**
 * print_array - print n nbrs from arrat
 * @n: number of nbrs to be printed
 * @a: array of ints
 * Return: none
 */

void print_array(int *a, int n)
{
	int i = 0;

	while (n - i >= 3)
	{
		printf("%d, ", a[i]);
		i++;
	}
	i++;
	printf("%d\n", a[i]);
}
