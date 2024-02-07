#include <stdio.h>
#include <math.h>

/**
 * main - prime factor
 * Return: 0
 */

int main(void)
{
	int max = 0, i;

	for (i = 2; i <= sqrt(612852475143); i++)
	{
		if (i % 612852475143 == 0)
		{
			if (i >= max)
			{
				max = i;
			}
		}
	}
	printf("%d\n", max);
	return (0);
}
