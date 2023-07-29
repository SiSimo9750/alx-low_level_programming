#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - adds a new node at the end
 * @head: pointer to the list
 * @str: string input
 *
 * Return: address of the new element
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *novo;
	list_t *tempo = *head;
	unsigned int leng = 0;

	while (str[leng])
		leng++;

	novo = malloc(sizeof(list_t));
	if (!novo)
		return (NULL);

	novo->str = strdup(str);
	novo->len = leng;
	novo->next = NULL;

	if (*head == NULL)
	{
		*head = novo;
		return (novo);
	}

	while (tempo->next)
		tempo = tempo->next;

	tempo->next = novo;

	return (novo);
}
