#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * delete_dnodeint_at_index - deletes the node.
 * @head: double pointer to the head of the list
 * @index: index of the node that should be deleted
 *
 * Return: 1 if it succeeded, -1 if it failed.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{

	dlistint_t *tmp = *head;
	dlistint_t *prev = NULL;
	unsigned int i;

	if (tmp == NULL)
		return (-1);

	if (index == 0)
	{
		*head = tmp->next;
		if (*head != NULL)
		{
			(*head)->prev = NULL;
		}
		return (1);
	}

	for (i = 1; tmp != NULL && i < index; i++)
	{
		prev = tmp;
		tmp = tmp->next;
	}
	if (tmp != NULL)
	{
		prev->next = tmp->next;
		if (tmp->next != NULL)
		{
			tmp->next->prev = prev;
		}
		return (1);
	}
	else
	{
		prev->next = NULL;
		return (-1);
	}
	return (1);
}
