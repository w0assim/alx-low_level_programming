#include <stdio.h>
#include <stdlib.h>


int main(void)
{
	int i;
	char *s = "-2147483648";

	
	i = atoi(s);
	printf("%d", i);
}