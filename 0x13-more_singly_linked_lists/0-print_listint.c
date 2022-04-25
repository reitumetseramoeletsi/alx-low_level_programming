#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/**
 * print_listint - Prints all elements of a linked list
 * @h: Pointer to head of the list
 *
 * Return: The number of nodes
 *
 */
size_t print_listint(const listint_t *h)
{
	size_t num = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		num++;
	}
	return (num);
}
