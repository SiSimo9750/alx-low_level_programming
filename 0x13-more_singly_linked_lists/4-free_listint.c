#include "lists.h"

/**
 * free_listint - frees a linked list
 * @head: input list
 */
void free_listint(listint_t *head)
{
	listint_t *tempo;

	while (head)
	{
		tempo = head->next;
		free(head);
		head = tempo;
	}
}
