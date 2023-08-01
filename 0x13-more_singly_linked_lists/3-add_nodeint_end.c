#include "lists.h"

/**
 * add_nodeint_end - adds a node at the end
 * @head: head pointer
 * @n: data to add
 *
 * Return: pointer to the added node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_toadd;
	listint_t *tempo = *head;

	new_toadd = malloc(sizeof(listint_t));
	if (!new_toadd)
		return (NULL);

	new_toadd->n = n;
	new_toadd->next = NULL;

	if (*head == NULL)
	{
		*head = new_toadd;
		return (new_toadd);
	}

	while (tempo->next)
		tempo = tempo->next;

	tempo->next = new_toadd;

	return (new_toadd);
}
