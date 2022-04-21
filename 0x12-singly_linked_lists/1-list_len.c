#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * list_len - determines the number of elements
 * @h: The given list
 *
 * Return: The number of elements in a list
 */
size_t list_len(const list_t *h)
{
	size_t count;

	if (h->str != NULL)
	{
		for (count = 0; h; count++)
		{
			h = h->next;
		}
	}
	return (count);
}
