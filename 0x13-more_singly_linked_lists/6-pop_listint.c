#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - function that deletes the head node
 * and returns the head node's data
 * Return: the head node's data (n)  if the linked list is empty return 0
 * @head: head node of the linked  list
 */
int pop_listint(listint_t **head)
{
	int n;
	listint_t *temp = *head;

	if (temp == NULL)
	{
		return (0);
	}
	n = temp->n;
	*head = temp->next;
	free(temp);
	return (n);
}
