#include "main.h"
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
