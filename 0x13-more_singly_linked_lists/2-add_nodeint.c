#include "lists.h"
#include <stdlib.h>

listint_t**  getnode(const int n);

/**
 * add_nodeint -adds a new node at the beginning of a listint_t lis
 * @head: pointe to the first node
 * @n: value of the new node
 *
 * Return: adress of node created
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newnode;
	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
	{
		return (NULL);
	}
	else
	{
		newnode->next = *head;
		newnode->n = n;
		*head = newnode;
	}
	return (*head);

}


/**
 * getnode - gets new node
 * @n: data for the new node
 *
 * Return: new node created
 */
/*
listint_t**  getnode(const int n)
{
	listint_t *newnode;
	newnode = malloc(sizeof(listint_t));
	newnode->n = n;
	newnode->next = NULL;
	return (*newnode);
}
*/
