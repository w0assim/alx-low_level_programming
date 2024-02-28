#include "main.h"

#include <string.h>

/**
 * _strncpy - copy n bytes to string
 * @dest: destination string
 * @src: source string
 * Return: copied string
 */

char *_strncpy(char *dest, char *src, int n)
{
	strncpy(dest, src, n);
	return (dest);
}
