#include "main.h"

/*Function prints to stdout
 string passed in arguments
 as series of characters
 then adding new line*/


void _puts_recursion(char *s)
{
    while (*s)
    {
        _putchar(*s);
        s = s + 1;
    }
    _putchar('\n');
}

