#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - adds a new node
 * @head: pointer to the list
 * @str: to add
 *
 * Return: new element'saddress
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *novo;
	unsigned int leng = 0;

	while (str[leng])
		leng++;

	novo = malloc(sizeof(list_t));
	if (!novo)
		return (NULL);

	novo->str = strdup(str);
	novo->len = leng;
	novo->next = (*head);
	(*head) = novo;

	return (*head);
}
