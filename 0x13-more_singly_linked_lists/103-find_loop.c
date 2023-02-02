#include "lists.h"
#include <stdio.h>

/**
 * find_listint_loop - finds the loop in a linked list
 * @head: linked list to search for
 *
 * Return: address of the node where the loop starts, or NULL
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *temp_1 = head;
	listint_t *temp_2 = head;

	if (!head)
		return (NULL);

	while (temp_1 && temp_2 && temp_2->next)
	{
		temp_2 = temp_2->next->next;
		temp_1 = temp_1->next;
		if (temp_2 == temp_1)
		{
			temp_1 = head;
			while (temp_1 != temp_2)
			{
				temp_1 = temp_1->next;
				temp_2 = temp_2->next;
			}
			return (temp_2);
		}
	}

	return (NULL);
}

