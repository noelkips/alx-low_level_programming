#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: double head pointer
 * @idx: index of the list where the new node should be added
 * @n: value of the new node
 *
 * Return: adress of node created or null if it fails
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *temp, *ptr;

	temp = *head;
	ptr = malloc(sizeof(listint_t));
	if (ptr == NULL || head)
	{
		return (NULL);
	}
	if (idx != 0)
	{
		for (i = 0; i < idx - 1; i++)
		{
			temp = temp->next;
			ptr->n = n;
			ptr->next = temp->next;
			temp->next = ptr;
		}
	} else if (idx == 0)
	{
		temp = temp->next;
		ptr->n = n;
		ptr->next = temp->next;
		temp->next = ptr;
	}
	else
		return (NULL);

	return (ptr);

}
