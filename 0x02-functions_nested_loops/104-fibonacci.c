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
		printf("%.0Lf, ", fib1);
		if (cpt == 98)
		{
			printf("%.0Lf\n", fib2);
		}
		else
		{
			printf("%.0Lf, ", fib2);
		}
	}
	return (0);
}

