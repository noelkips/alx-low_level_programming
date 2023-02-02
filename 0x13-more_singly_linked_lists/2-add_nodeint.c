#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint -adds a new node at the beginning of a listint_t lis
 * @head: double head pointer
 * @n: value of the new node
 *
 * Return: adress of node created
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newnode;

	newnode = malloc(sizeof(listint_t));

	if (newnode == NULL || head == NULL)
	{
		return (NULL);
	}
	newnode->next = *head;
	newnode->n = n;
	*head = newnode;
	return (*head);

}
