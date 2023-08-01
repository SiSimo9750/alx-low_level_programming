#include "lists.h"

/**
 * print_listint - prints a linked list
 * @h: input linked list
 *
 * Return: nodes counter
 */
size_t print_listint(const listint_t *h)
{
	size_t counter = 0;

	while (h)
	{
		printf("%d\n", h->n);
		counter++;
		h = h->next;
	}

	return (counter);
}
