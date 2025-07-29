#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * add_dnodeint_end - Adds a new node at the end of a dlistint_t list.
 * @head: Double pointer to the head of the list.
 * @n: The integer value for the new node.
 *
 * Return: Address of the new element, or NULL if it failed.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new;
	dlistint_t *lastnode = *head;

	new = malloc(sizeof(dlistint_t));

	if (new == NULL)
	{
		free(new);
		return (NULL);
	}

	if (*head == NULL)
	{
		*head = new;
		new->prev = NULL;
	}
	else
	{
			while (lastnode->next != NULL)
			{
				lastnode = lastnode->next;
			}
				lastnode->next = new;
				new->prev = lastnode;
	}
	new->next = NULL;
	new->n = n;
	return (new);

}
