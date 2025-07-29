#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * add_node_end - Adds a new_node node at the end of a list_t list.
 * @head: A pointer to the pointer to the first node in the list.
 * @str: The string to be added to the new_node node.
 *
 * Return: The address of the new_node element, or NULL if it failed.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	int len = 0;

	list_t *new_node = malloc(sizeof(list_t));
	list_t *lastnode = *head;

	if (head == NULL || str == NULL || new_node == NULL)
	{
		free(new_node);
		return (NULL);
	}
		new_node->str = strdup(str);
		while (str[len] != '\0')
		{
			len++;
		}
		new_node->len = len;
		new_node->next = NULL;

		if (*head == NULL)
		{
			*head = new_node;
		}
		else
		{
			while (lastnode->next != NULL)
			{
				lastnode = lastnode->next;
			}
				lastnode->next = new_node;
		}
	return (new_node);
}
