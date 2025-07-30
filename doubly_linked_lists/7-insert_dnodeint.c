#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: double pointer to the head of the list
 * @idx: index where the new node should be added
 * @n: data for the new node
 *
 * Return: address of the new node.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new;
	unsigned int i = 0;
	dlistint_t *tmp = *h;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	if (idx == 0)
	{
		new->n = n;
		new->next = *h;
		if (*h != NULL)
		{
			(*h)->prev = new;
		}
		*h = new;
	}
	else
	{
		while (tmp != NULL && i < idx - 1)
		{
			tmp = tmp->next;
			i++;
		}
		if (tmp == NULL)
		{
			free(new);
			return (NULL);
		}
		new->n = n;
		new->next = tmp ? tmp->next : NULL;
		new->prev = tmp;
		if (tmp)
			tmp->next = new;
		if (new->next)
			new->next->prev = new;
	}
	return (new);
}
