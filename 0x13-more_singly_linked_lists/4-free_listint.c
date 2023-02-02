#include "lists.h"
#include <stdlib.h>

/**
 * free_listint -  frees a listint_t list
 * @head: head pointer to the list
 *
 * Return: None
 */

void free_listint(listint_t *head)
{
	listint_t *temp;

	temp = head;

	while (head != NULL)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
