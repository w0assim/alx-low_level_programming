#include <stdio.h>

/**
 * main - main 
 * Return: 
 */

int main(void)
{
	unsigned long fib1=1, fib2=2;
	int cpt=1;
	while (cpt < 48){
		printf("%lu, %lu, ", fib1, fib2);
		fib1 += fib2;
		fib2 += fib1;
		cpt ++;
	}
	printf("%lu, %lu", fib1, fib2);
	return (1);
}