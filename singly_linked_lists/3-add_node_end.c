#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * add_node_end - Adds a new node at the end of a list_t list.
 * @head: A pointer to the pointer to the first node in the list.
 * @str: The string to be added to the new node.
 *
 * Return: The address of the new element, or NULL if it failed.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	int len = 0;

	list_t *new = malloc(sizeof(list_t));
	list_t *last = *head;

	if (new == NULL)
		return (NULL);

		new->str = strdup(str);
		while (str[len] != '\0')
		{
			len++;
		}
		new->len = len;
		new->next = NULL;

		if (*head == NULL)
			*head = new;
		else
		{
			while (last->next)
			last = last->next;
			last->next = new;
		}
	return (new);
}
