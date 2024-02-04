#include <stdio.h>

/**
 * main - main 
 * Return: int
 */

int main(void)
{
	unsigned int fib1=1, fib2=2;
	int cpt=1;
	printf("%u, %u\n", fib1, fib2);
	fib1 += fib2;
	fib2 += fib1;
	while (cpt < 98){
		printf("%u, %u", fib1, fib2);
		fib1 += fib2;
		fib2 += fib1;
		cpt ++;
	}
}