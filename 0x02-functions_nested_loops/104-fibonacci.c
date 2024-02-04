#include <stdio.h>

/**
 * main - main 
 * Return: int
 */
/**
 * 18446744073709551615
 * 1000000000000000000
 */
int main(void)
{
	unsigned long fib1=1, fib2=2, cpt=1, fib11, fib12, fib21, fib22;
	while (cpt < 48)
	{
		while(fib1 < 100000000000000000 && fib2 < 100000000000000000)
		{
			printf("%lu, %lu, ", fib1, fib2);
			fib1 += fib2;
			fib2 += fib1;
			cpt ++;
		}
		fib11 = fib1 / 1000000000000;
		fib12 = fib1 % 1000000000000;
		fib21 = fib2 / 1000000000000;
		fib22 = fib2 % 1000000000000;
		while (cpt < 48)
		{
			printf("%lu%lu, %lu%lu, ", fib11, fib12, fib21, fib22);
			fib11 += fib21 + ((fib12 + fib22) / 1000000000000);
			fib12 = (fib12 + fib22) % 1000000000000;
			cpt++;
		}
	}
	printf("%lu%lu, %lu%lu", fib11, fib12, fib21, fib22);
	return (1);
}