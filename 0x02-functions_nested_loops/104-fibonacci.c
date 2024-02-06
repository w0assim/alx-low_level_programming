#include <stdio.h>


/**
 * main - main
 * Return: int
 */


int main(void)
{
	unsigned long cpt = 1, fib11 = 0, fib12 = 1, fib21 = 0,
	fib22 = 2, divide = 10000000000000;

	while (cpt <= 48)
	{

		if (fib21 == 0)
			printf("%lu, %lu, ", fib12, fib22);

		else if (fib11 == 0)
			printf("%lu, %lu%lu, ", fib12, fib21, fib22);

		else
			printf("%lu%lu, %lu%lu, ", fib11, fib12, fib21, fib22);

		fib11 += fib21 + (fib12 + fib22) / divide;
		if ((((fib12 + fib22) / (divide / 10)) % 10 == 0)
		&& (((fib12 + fib22) / (divide / 10)) != 0))
		{
			fib11 *= 10;
			divide /= 10;
			fib21 = (fib21 * 10) + (fib22 / divide);
			fib22 %= divide;
		}
		fib12 = (fib12 + fib22) % divide;
		fib21 += fib11 + (fib12 + fib22) / divide;
		if ((((fib12 + fib22) / (divide / 10)) % 10 == 0)
		&& (((fib12 + fib22) / (divide / 10)) != 0))
		{
			fib21 *= 10;
			divide /= 10;
			fib11 = (fib11 * 10) + (fib12 / divide);
			fib12 %= divide;
		}
		fib22 = (fib12 + fib22) % divide;
		cpt++;
	}
	printf("%lu%lu, %lu%lu", fib11, fib12, fib21, fib22);
	return (1);
}
