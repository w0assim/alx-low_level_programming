#include "main.h"

/*function printing on stdout
string passed in arguments
as a series of characters
then adding a new line
*/


void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		s = s + 1;
	}
	else 
	{
		_putchar('\n');
	}
}
