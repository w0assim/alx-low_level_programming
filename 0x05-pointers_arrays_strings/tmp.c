#include <stdio.h>
#include "main.h"
#include "5-rev_string.c"




int main(void)
{
	char c[] = "";

	rev_string(c);
	printf("%s", c);
}