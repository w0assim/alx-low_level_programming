#include "main.h"

#include <string.h>

/**
 * _strncat - concatenate n bytes
 * @dest: destination string
 * @src: source string
 * @n: number of bytes
 * Return: concatenated string
 */

char *_strncat(char *dest, char *src, int n)
{
	strncat(dest, src, n);
	return (dest);
}
