#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index- deletes the node at index
 * listint_t linked list
 * @head: double head pointer to the list
 * @index: index of the node to delete
 *
 * Return: 1 on success and (-1) on failure
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *next;
	unsigned int i;

	temp = *head;
	if (head == NULL || *head == NULL)
	{
		return (-1);
	}
	if (index == 0)
	{
		temp = temp->next;
		free(*head);
		*head = temp;
		return (1);
	}
	for (i = 0; i < index - 1; i++)
	{
		if (temp->next == NULL)
			return (-1);
		temp = temp->next;
	}
	next = temp->next;
	temp->next = next->next;
	free(next);
	return (1);
}
