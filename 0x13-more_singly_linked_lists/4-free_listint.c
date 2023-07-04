#include "lists.h"
#include <stdlib.h>

/**
 * free_listint -fre list
 * @h: head
 * Retun: int
 *//

void free_listint(listint_t *head)
{
	listint_t *next;

	while (head != NULL)
	{
		next = head->next;
		free(head);
		head = next;
	}
}

