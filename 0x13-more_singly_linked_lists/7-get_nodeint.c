#include "lists.h"

/**
 * get_nodeint_at_index - returns the node at given index
 * @head: the head node
 * @index: input index
 *
 * Return: pointer to the requested node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int a = 0;
	listint_t *tempo = head;

	while (tempo && a < index)
	{
		tempo = tempo->next;
		a++;
	}

	return (tempo ? tempo : NULL);
}
