#include "lists.h"
#include <stdio.h>

/**
 * listint_len -return number of elememnts in listint_t list
 * @h: head pointer of listint_t
 *
 * Return: number of nodes
 */

size_t listint_len(const listint_t *h)
{
	if (h == NULL)
		return (0);
	return (1 + listint_len(h->next));

}
