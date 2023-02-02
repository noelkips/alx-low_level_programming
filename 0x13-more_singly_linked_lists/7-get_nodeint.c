#include "lists.h"

/**
 * get_nodeint_at_index -  returns the nth node of a
 *     listint_t linked list
 *
 * @head: head pointer to the list
 * @index: none index
 *
 * Return: nth node of the list or
 *   Null if list doesn't exist
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	if (head == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < index; i++)
	{
		head = head->next;
		if (head == NULL)
			return (NULL);
	}

	return (head);
}
