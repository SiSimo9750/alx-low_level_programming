#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node in a given index
 * @head: pointer to the head
 * @idx: index to new node
 * @n: new node data
 *
 * Return: pointer to the new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int a;
	listint_t *new_toadd;
	listint_t *tempo = *head;

	new_toadd = malloc(sizeof(listint_t));
	if (!new_toadd || !head)
		return (NULL);

	new_toadd->n = n;
	new_toadd->next = NULL;

	if (idx == 0)
	{
		new_toadd->next = *head;
		*head = new_toadd;
		return (new_toadd);
	}

	for (a = 0; tempo && a < idx; a++)
	{
		if (a == idx - 1)
		{
			new_toadd->next = tempo->next;
			tempo->next = new_toadd;
			return (new_toadd);
		}
		else
			tempo = tempo->next;
	}

	return (NULL);
}
