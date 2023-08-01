#include "lists.h"

/**
 * reverse_listint - reverses a singly linked list
 * @head: pointer to the header node
 *
 * Return: pointer to the header node in the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *frst = NULL;
	listint_t *scnd = NULL;

	while (*head)
	{
		scnd = (*head)->next;
		(*head)->next = frst;
		frst = *head;
		*head = scnd;
	}

	*head = frst;

	return (*head);
}
