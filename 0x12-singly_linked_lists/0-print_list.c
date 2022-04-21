#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * print_list - prints the elements of a list
 * @h: The given list
 *
 * Return: The number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t count;

	for (count = 0; h; count++)
	{
		if (h->str == NULL)
		{
			printf("[%d] %s\n", 0, "(nil)");
			count++;
			h = h->next;
		}
		if (h->str != NULL)
		{
			printf("[%d] %s\n", h->len, h->str);
			h = h->next;
		}
	}
	return (count);
}
