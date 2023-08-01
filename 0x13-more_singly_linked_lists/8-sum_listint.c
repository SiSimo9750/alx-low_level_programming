#include "lists.h"

/**
 * sum_listint - calculates the sum of all the data
 * @head: head of linked list
 *
 * Return: the result
 */
int sum_listint(listint_t *head)
{
	int s = 0;
	listint_t *tempo = head;

	while (tempo)
	{
		s += tempo->n;
		tempo = tempo->next;
	}

	return (s);
}
