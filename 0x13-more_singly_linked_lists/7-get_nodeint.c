#include "lists.h"

/**
 * get_nodeint_at_index - function thatreturns the nth node of linked list
 * Return: the nth node or NULL if it doesn't exist
 * @head: first node
 * @index: index ofthe node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp = head;
	unsigned int i = 0;

	while (temp)
	{
		if (i == index)
		{
			return (temp);
		}
		i++;
		temp = temp->next;
	}
	return (NULL);
}
