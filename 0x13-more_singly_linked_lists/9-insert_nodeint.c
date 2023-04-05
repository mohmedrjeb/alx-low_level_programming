#include "lists.h"

/**
 * insert_nodeint_at_index - function that insert a new node in a linked list
 * @head: pointer to the first node in the list
 * @idx: index for the  new node
 * @n: data to insert the new node
 *
 * Return: return the new node or NULL if doesn't exist
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *tmp = *head;
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new || !head)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}

	for (i = 0; tmp && i < idx; i++)
	{
		if (i == idx - 1)
		{
			new->next = tmp->next;
			tmp->next = new;
			return (new);
		}
		else
			tmp = tmp->next;
	}
	return (NULL);
}

