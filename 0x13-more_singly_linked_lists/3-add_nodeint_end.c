#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint_end -adds a new node at the end of a listint_t lis
 * @head: double head pointer
 * @n: value of the new node
 *
 * Return: adress of node created or null if it fails
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *ptr, *temp;

	ptr = malloc(sizeof(listint_t));
	temp = *head;

	if (ptr == NULL)
	{
		return (NULL);
	}
	ptr->next = NULL;
	ptr->n = n;

	if (*head == NULL)
	{
		*head = ptr;
		return (ptr);
	}

	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = ptr;
	return (ptr);

}
