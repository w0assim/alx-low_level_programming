#include "main.h"
#include <string.h>

/**
 * _strchr - search for character in string
 * @c: character to find
 * @s: string to search
 * Return: pointer to string
 */

char *_strchr(char *s, char c)
{
	return (strchr(s, c));
}
