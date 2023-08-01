#include "lists.h"

/**
 * listint_len - length of a linked lists
 * @h: input linked list
 *
 * Return: number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t len = 0;

	while (h)
	{
		len++;
		h = h->next;
	}

	return (len);
}
