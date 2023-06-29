#include <stdio.h>

/**
 * main - main
 * Return: int
 */

int main(void)
{
	long int cpt, fib1, fib2;

	cpt = 0;
	fib1 = 0;
	fib2 = 1;
	while (cpt != 50)
	{
		cpt++;
		cpt++;
		fib1 += fib2;
		printf("%ld, ", fib1);
		fib2 += fib1;
		if (cpt != 50)
		{
			printf("%ld, ", fib2);
		}
		else
		{
			printf("%ld\n", fib2);
		}
	}
	return (0);
}

