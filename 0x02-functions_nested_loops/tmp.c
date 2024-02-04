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
    unsigned long i = pow(2, 64) + pow(2, 63);
    printf("%lu", i);
}