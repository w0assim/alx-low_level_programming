#include "main.h"

/**
*Function prints to stdout
*string passed in arguments
*as series of characters
*then adding new line
*/

/**
 * _puts_recursion for printing strings
 *  @s: variable-> string
 *  return: void
 */


void _puts_recursion(char *s)
{
if (*s)
{
_putchar(*s);
_puts_recursion(s + 1);
}
_putchar('\n');
}
