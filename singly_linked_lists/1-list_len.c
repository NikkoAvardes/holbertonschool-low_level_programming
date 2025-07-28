#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
size_t list_len(const list_t *h)
{
	if (h == NULL)
	{
		return (0);
	}
	return (1 + list_len(h->next));

}
