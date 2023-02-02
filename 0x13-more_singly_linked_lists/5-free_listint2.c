#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 -  frees a listint_t list and
 *                   sets the head to null
 * @head: double head pointer
 *
 * Return: None
 */

void free_listint2(listint_t **head)
{
	listint_t *temp;


	while (*head)
	{
		if (head == NULL)
		{
			break;
		}
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}
}
