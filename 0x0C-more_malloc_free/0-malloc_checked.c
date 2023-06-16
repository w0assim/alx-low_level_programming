#include "main.h"

/**
 * malloc_checked - function allocates memory
 * @b: is bytes to allocate
 * Return: void* is return value
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	return (ptr);
}

