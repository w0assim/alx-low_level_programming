#include "main.h"
#include <string.h>
/**
 * _memset - fills the memory adress with const
 * @s: ptr to adress to be filled
 * @b: const byte to fill memory
 * @n: number of bytes to fill with const
 */

char *_memset(char *s, char b, unsigned int n)
{
	memset(s, b, n);
	return (s);
}
