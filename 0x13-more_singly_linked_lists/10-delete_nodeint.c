#include "lists.h"

/**
 * delete_nodeint_at_index - deletes a node in given index
 * @head: pointer to the head node
 * @index: node to delete index
 *
 * Return: on success 1 and -1 on error
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tempo = *head;
	listint_t *actual = NULL;
	unsigned int a = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(tempo);
		return (1);
	}

	while (a < index - 1)
	{
		if (!tempo || !(tempo->next))
			return (-1);
		tempo = tempo->next;
		a++;
	}


	actual = tempo->next;
	tempo->next = actual->next;
	free(actual);

	return (1);
}
