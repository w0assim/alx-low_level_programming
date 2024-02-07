#include <ctype.h>
#include <stdlib.h>
#include <stdio.h>
#include "main.h"
#include <unistd.h>
//#include "6-print_line.c"
#include "5-more_numbers.c"
#include "7-print_diagonal.c"

int _putchar(int c)
{
	write(1, &c, 1);
	return (1);
}


int main(void)
{
	print_diagonal(20);
}