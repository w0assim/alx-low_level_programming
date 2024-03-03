#include "main.h"
#include <string.h>

/**
 * _strspn - get number of byte sequence in adress
 * @s: memory adress to search
 * @accept: bytes to search for
 * Return: number of bytes
 */

unsigned int _strspn(char *s, char *accept)
{
	return (strspn(s, accept));
}
