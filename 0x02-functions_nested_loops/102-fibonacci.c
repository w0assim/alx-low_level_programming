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
		printf("%d, ", fib1);
		fib2 += fib1;
		if (cpt != 50)
		{
			printf("%d, ", fib2);
		}
		else
		{
			printf("%d\n", fib2);
		}
	}
	return (0);
}

