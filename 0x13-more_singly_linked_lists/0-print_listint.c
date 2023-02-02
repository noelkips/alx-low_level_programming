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
	int i = 0;

	while (h)
	{
		printf("%d\n", h->n);
		i++;
		h = h->next;
	}
	return (i);

}
