#include <ctype.h>
#include <stdlib.h>
#include <stdio.h>

int main(void)
{
	for (int i = 0, j = 0; j < 10; i++)
	{
		j = i;
		printf("%d", j);
	}
	//printf("%d", (isupper(c)));
}