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

	if (a[i] != '\0' && n > 0)
	{
		for (; a[i + 1] != '\0' && (n - i) >= 2; i++)
		{
			printf("%d, ", a[i]);
		}
		printf("%d\n", a[i]);
	}
}
