#include <stdio.h>

/**
 * main - test
 *Return: int
 */

int main(void)
{
	int sum, nbr;

	sum = 0;
	nbr = 0;
	while (nbr != 1024)
	{
		if (nbr % 3 == 0 || nbr % 5 == 0)
		{
			sum += nbr;
		}
		nbr++;
	}
	printf("%d\n", sum);
	return (0);
}

