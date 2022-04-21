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
	size_t count = 0;

	if (h->str == NULL)
	{
		printf("[%d] %s\n", 0, "(nil)");
	}

	else
	{
		while (h)
		{
			printf("[%d]%s\n",h -> len, h->str);
			count++;
			h = h->next;
		}
	}	
	return (count);
}
