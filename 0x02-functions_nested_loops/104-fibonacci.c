#include <stdio.h>

/**
 * main - main
 * Return: int
 */

int main(void)
{
	unsigned long int fib1, fib2, cpt;

	cpt = 0;
	fib1 = 0;
	fib2 = 1;
	while (cpt != 98)
	{
		cpt++;
		cpt++;
		fib1 += fib2;
		fib2 += fib1;
		printf("%ld, ", fib1);
		if (cpt == 98)
		{
			printf("%ld\n", fib2);
		}
		else
		{
			printf("%ld, ", fib2);
		}
	}
	return (0);
}

