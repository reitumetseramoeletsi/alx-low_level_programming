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
	size_t count = 0;
	
	if (h->str != NULL)
	{
		while (h)
		{
			count++;
			h = h->next;
		}
	}
	return (count);
}
