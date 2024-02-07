#include <stdio.h>
#include <math.h>

/**
 * main - prime factor
 * Return: 0
 */

int main(void)
{
	unsigned long int i, j, tmp = 0;

	for (i = 612852475142; i > 0; i--)
	{
		if (612852475143 % i == 0)
		{
			for (j = 2; j <= sqrt(i); j++)
			{
				if (i % j == 0)
				{
					tmp = 1;
					break;
				}
			}
			if (tmp == 0)
			{
				printf("%lu\n", i);
				return (0);
			}
			else
			{
				tmp = 0;
			}
		}
	}
	printf("n");
	return (0);
}
