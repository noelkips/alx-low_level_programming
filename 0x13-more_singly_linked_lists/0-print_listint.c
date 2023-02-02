#include "lists.h"
#include <stdio.h>

/**
 * print_listint -prints all elememnts of a listint_t list
 * @h: pointer to listint_t
 *
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t count = 0;
	const listint_t *temp;

	temp = h;
	while (temp != NULL)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
		count++;
	}
	return (count);

}
