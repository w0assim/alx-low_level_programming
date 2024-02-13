#include <stdio.h>
#include "main.h"
#include "5-rev_string.c"

int main(void)
{
	char c[] = "wassim";

	printf("%s\n", c);
	rev_string(c);
	printf("\n%s\n", c);
}