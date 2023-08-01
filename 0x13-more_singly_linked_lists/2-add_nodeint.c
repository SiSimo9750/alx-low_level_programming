#include "lists.h"

/**
 * add_nodeint - adds new node at the beginning
 * @head: pointer to the first node
 * @n: data to add
 *
 * Return: pointer to the added node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_toadd;

	new_toadd = malloc(sizeof(listint_t));
	if (!new_toadd)
		return (NULL);

	new_toadd->n = n;
	new_toadd->next = *head;
	*head = new_toadd;

	return (new_toadd);
}
