#include <stdio.h>

/**
 * main -main
 * Return: int
 */

int main(void)
{
	long int fib1, fib2;

	fib1 = 0;
	fib2 = 1;
	while (fib1 < 4000000 && fib2 < 4000000)
	{
		fib1 += fib2;
		fib2 += fib1;
		if (fib2 >= 4000000)
		{
			if (fib1 < 4000000)
			{
				printf("%ld", fib1);
			}
		}
		else
		{
			printf("%ld, ", fib1);
			if ((fib1 + fib2) < 4000000)
			{
				printf("%ld, ", fib2);
			}
			else
			{
				printf("%ld", fib2);
			}
		}
	}
	printf("\n");
	return (0);
}

