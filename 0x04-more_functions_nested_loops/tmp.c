#include <math.h>
#include <stdio.h>

int main(void)
{
	long int i, j;

	i = 612852475143;
	
	while (i % 3 == 0)
	{
		i /= 3;
		printf("%ld\n", i);
	}
}