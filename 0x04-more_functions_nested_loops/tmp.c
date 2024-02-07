#include <ctype.h>
#include <stdlib.h>
#include <stdio.h>
#include "main.h"
#include <unistd.h>
//#include "6-print_line.c"


int _putchar(int c)
{
	write(1, &c, 1);
	return (1);
}


int main(void)
{
	print_line(-3);
}