#include <stdio.h>
#include <stdlib.h>
#include <math.h>


/*
*
*
*
*/

int main(void)
{
    unsigned long i =     1231231231231231234;
    unsigned long d = i / 10000000000000000;
    unsigned long c = i % 10000000000000000;
    printf("%lu%lu", d, c);
}