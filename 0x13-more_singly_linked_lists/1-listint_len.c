#include "lists.h"

/**
 * listint_len -print listint len
 * @h: head
 * Return: int
 */

size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
	h = h->next;
		count++;
	}
	return (count);
}

