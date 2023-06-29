#include <stdio.h>

/**
 * main -main
 * Return: int
 */

int main(void)
{
	long long fib1, fib2;

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
				printf("%lld", fib1);
			}
		}
		else
		{
			print("%lld, ", fib1);
			if ((fib1 + fib2) < 4000000)
			{
				printf("%lld, ", fib2);
			}
			else
			{
				printf("%lld", fib2);
			}
		}
	}
	printf("\n");
}

