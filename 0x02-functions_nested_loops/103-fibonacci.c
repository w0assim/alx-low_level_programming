#include <stdio.h>

/**
 * main -main
 * Return: int
 */

int main(void)
{
	long int fib1, fib2, sum;

	fib1 = 0;
	fib2 = 1;
	sum = 0;
	while (fib1 < 4000000 && fib2 < 4000000)
	{
		fib1 += fib2;
		fib2 += fib1;
		if (fib2 < 4000000)
		{
			if (fib2 % 2 == 0)
			{
				sum += fib2;
			}
			if (fib1 % 2 == 0)
			{
				sum += fib1;
			}
		}
		else
		{
			if (fib1 < 4000000)
			{
				if (fib1 % 2 == 0)
				{
					sum += fib1;
				}
			}
		}
	}
	printf("%ld\n", sum);
	return (0);
}

