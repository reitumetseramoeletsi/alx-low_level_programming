#include "lists.h"
#include <stddef.h>
#include <stdio.h>

/**
 * listint_len - Prints the length of a list
 * @h: Ponter to the head
 *
 * Return: The length of the list
 */
size_t listint_len(const listint_t *h)
{
	size_t len = 0;

	while (h != NULL)
	{
		h = h->next;
		len++;
	}
	return (len);
}
