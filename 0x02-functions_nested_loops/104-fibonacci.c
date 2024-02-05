#include <stdio.h>


/**
 * main - main
 * Return: int
 */


int main(void)
{
	unsigned long fib1 = 1, fib2 = 2, cpt = 1, fib11, fib12, fib21, fib22;

	while (cpt <= 48)
	{
		while (fib1 < 1000000000000000000 && fib2 < 1000000000000000000)
		{
			printf("%lu, %lu, ", fib1, fib2);
			fib1 += fib2;
			fib2 += fib1;
			cpt++;
		}
		fib11 = fib1 / 10000000000000;
		fib12 = fib1 % 10000000000000;
		fib21 = fib2 / 10000000000000;
		fib22 = fib2 % 10000000000000;
		while (cpt <= 48)
		{
			printf("%lu%lu, %lu%lu, ", fib11, fib12, fib21, fib22);
			fib11 += fib21 + ((fib12 + fib22) / 10000000000000);
			if ((((fib12 + fib22) / 1000000000000) % 10 == 0)
			&& ((fib12 + fib22) / 1000000000000) != 0)
			{
				fib11 *= 10;
			}
			fib12 = (fib12 + fib22) % 10000000000000;
			fib21 += fib11 + ((fib12 + fib22) / 10000000000000);
			if ((((fib12 + fib22) / 1000000000000) % 10 == 0)
			&& ((fib12 + fib22) / 1000000000000) != 0)
			{
				fib21 *= 10;
			}
			fib22 = (fib12 + fib22) % 10000000000000;
			cpt++;
		}
	}
	printf("%lu%lu, %lu%lu \n", fib11, fib12, fib21, fib22);
	return (1);
}
