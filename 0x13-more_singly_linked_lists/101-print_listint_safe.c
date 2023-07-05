#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

const listint_t **_s(const listint_t **list, size_t size,
		const listint_t *new);

/**
 * _s -relalo
 * @list: s;qklwjnd
 * @size: ldwkolk
 * @new: s;wljd
 * Return: list
 */

const listint_t **_s(const listint_t **list, size_t size,
		const listint_t *new)
{
	const listint_t **newlist;
	size_t i;

	newlist = malloc(size * sizeof(listint_t *));
	if (newlist == NULL)
	{
		free(list);
		exit(98);
	}
	for (i = 0; i < size - 1; i++)
		newlist[i] = list[i];
	newlist[i] = new;
	free(list);
	return (newlist);
}

/**
 * print_listint_safe- lfklj
 * @head: head node
 * Return: list
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t i, num = 0;
	const listint_t **list = NULL;

	while (head != NULL)
	{
		for (i = 0; i < num; i++)
		{
			if (head == list[i])
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				free(list);
				return (num);
			}
		}
		num++;
		list = _s(list, num, head);
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
	}
	free(list);
	return (num);
}

