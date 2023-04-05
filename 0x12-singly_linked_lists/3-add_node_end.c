#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * add_node_end - adds a new node at end of list
 * @head: head of list
 * @str: string for the  new node
 * Return: address of new element ot NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new = malloc(sizeof(list_t));
	list_t *last = NULL;

	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	new->len = strlen(str);
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	last = *head;
	while (last->next)
	{
		last = last->next;
	}
	last->next = new;
	return (new);
}
