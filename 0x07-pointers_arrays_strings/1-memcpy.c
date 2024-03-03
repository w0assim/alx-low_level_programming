#include "main.h"
#include <string.h>

/**
 * _memcpy - copy memory content
 * @dest: copy to
 * @src: copy from
 * @n: nb of bytes to copy
 * Return: pointer to destination adress
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	memcpy(dest, src, n);
	return (dest);
}
