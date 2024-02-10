#include <stdio.h>

/**
 * main - largest prime divider
 * Return: 0
 */

int main(void)
{
	unsigned long i, target = 612852475143;

	for (i = 2; i <= target; i++)
	{
		if (target % i == 0)
		{
			while (target % i == 0)
			{
				target /= i;
			}
			if (target == 1)
			{
				printf("%lu\n", i);
				return (0);
			}
		}
	}
	return (0);
}
