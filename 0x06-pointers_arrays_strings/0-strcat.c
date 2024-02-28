#include "main.h"

#include <string.h>

/**
 * _strcat - concatenate strings
 * @dest: destination string
 * @src: source string
 * Return: pointer to concatenated string
 */

char *_strcat(char *dest, char *src)
{
	strcat(dest, src);
	return (dest);
}
