#include "lists.h"

/**
 * pop_listint - deletes the first node
 * @head: pointer to the head
 *
 * Return: the data of the deleted element or 0 if its empty
 */
int pop_listint(listint_t **head)
{
	listint_t *tempo;
	int da_ta;

	if (!head || !*head)
		return (0);

	da_ta = (*head)->n;
	tempo = (*head)->next;
	free(*head);
	*head = tempo;

	return (da_ta);
}
