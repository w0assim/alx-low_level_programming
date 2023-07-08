#include <stdio.h>

/**
 * main - main
 * Return: int
 */

int main(void)
{
	unsigned long fib1, fib2, cpt, fib11, fib12, fib21, fib22, tmp;

	cpt = 0;
	fib1 = 0;
	fib2 = 1;
	while (cpt < 98)
	{
		fib11 = fib1 / 1000000;
		fib12 = fib1 % 1000000;
		fib21 = fib2 / 1000000;
		fib22 = fib2 % 1000000;
		if (fib1 >= 2000000000 || fib2 >= 2000000000)
		{
			if (fib1 < fib2)
			{
				while (cpt < 98)
				{
					fib11 += fib21;
					fib12 += fib22;
					fib11 += fib12 / 1000000;
					fib12 %= 1000000;
					cpt++;
					if (cpt < 98)
					{
						printf("%ld%ld, ", fib11, fib12);
						fib21 += fib11;
						fib22 += fib12;
						fib21 += fib22 / 1000000;
						fib22 %= 1000000;
						cpt++;
						if (cpt <98)
							printf("%ld%ld, ", fib21, fib22);
						else
							return (1);
					}
					else
						printf("%ld%ld", fib11, fib12); return (1);
				}
			}
			else
			{
				while (cpt < 98)
				{
					fib21 += fib11;
					fib22 += fib12;
					fib21 += fib22 / 1000000;
					fib22 %= 1000000;
					cpt++;
					if (cpt < 98)
					{
						printf("%ld%ld, ", fib21, fib22);
						fib11 += fib21;
						fib12 += fib22;
						fib11 += fib12 / 1000000;
						fib12 %= 1000000;
						cpt++;
						if (cpt < 98)
							printf("%ld%ld, ", fib11, fib12);
						else
							return (1);
					}
					else
						printf("%ld%ld", fib21, fib22); return (1);
				}
			}
		}
		else
		{
			if (fib1 < fib2)
			{
				if (cpt == 0)
					printf("%ld, %ld, ", fib1, fib2);
				fib1 += fib2;
				cpt++;
				printf("%ld, ", fib1);
			}
			else
				fib2 += fib1; cpt++; printf("%ld, ", fib2);
		}
	}
}

