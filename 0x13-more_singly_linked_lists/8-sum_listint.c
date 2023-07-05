#include "lists.h"

/**
 * sum_listint -sum lis
 * Return: int
 * @head: head node
 */


int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}

