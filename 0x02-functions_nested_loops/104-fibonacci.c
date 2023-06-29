#include <stdio.h>

/**
 * main - main
 * Return: int
 */

int main(void)
{
	long double fib1, fib2, cpt;

	cpt = 0;
	fib1 = 0;
	fib2 = 1;
	while (cpt != 98)
	{
		cpt++;
		cpt++;
		fib1 += fib2;
		fib2 += fib1;
		printf("%Lf, ", fib1);
		if (cpt == 98)
		{
			printf("%Lf\n", fib2);
		}
		else
		{
			printf("%Lf, ", fib2);
		}
	}
	return (0);
}

