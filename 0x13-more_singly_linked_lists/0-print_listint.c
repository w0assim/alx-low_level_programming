#include "lists.h"
#include <stdio.h>



/**
 * print_listint -print listint
 * @h: head
 * Return: int
 */


size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}

