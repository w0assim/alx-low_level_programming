#include <stdio.h>
#include <math.h>

int main(void)
{
	int i, j, test1 = 1, test2 = 2;

	for (i = 0; i <= 10; i++)
	{
		if (i == 5)
		{
			for (j = 0; j <= 10; j++)
			{
				if (j == 5)
				{
					break;
				}
				test1++;
			}
			test2++;
		}
	}
	int x;
	x = 11 % sqrt(11);
	//printf("%f", 11 % sqrt(11));
}