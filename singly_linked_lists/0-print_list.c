#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
#include <unistd.h>
/**
 * * print_number - prints an unsigned integer to stdout
 * @n: The number to print
 *
 * Return: void
 */
void print_number(unsigned int n)
{
	char c;

	if (n == 0)
	{
		write(1, "0", 1);
		return;
	}
	if (n / 10)
	{
		print_number(n / 10);
	}
	c = (n % 10) + '0';
	write(1, &c, 1);
}
/**
 * print_str - prints a string to stdout
 * @str: The string to print
 *
 * Return: void
 */
void print_str(const char *str)
{
	int i = 0;

	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

/**
 * print_list - prints all the elements of a list_t list
 * @h: pointer to the head of the list
 *
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		write(1, "[", 1);
		if (h->str == NULL)
		{
			write(1, "0] (nil)\n", 9);
		}
		else
		{
			print_number(h->len);
			write(1, "] ", 2);
			print_str(h->str);
			write(1, "\n", 1);
		}
		count++;
		h = h->next;
	}
	return (count);
}
