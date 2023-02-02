#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint- deletes the head node of a
 * listint_t linked list, and
 * returns the head node’s data (n).
 * @head: double head pointer to the list
 *
 * Return: data of the removed node
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int n;

	temp = *head;
	if (*head == NULL)
	{
		return (0);
	}

	*head = temp->next;
	n = temp->n;
	free(temp);

	return (n);
}
