#include <ctype.h>

/**
 * _isupper: check upperCASE
 * @c: char to check
 */

int _isupper(int c)
{
	if (!(isupper(c)))
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
