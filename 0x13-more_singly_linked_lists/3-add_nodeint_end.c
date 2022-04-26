#include "lists.h"
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>

/**
 * add_nodeint_end - Adds node at the end of the list
 *@head: Pointer to the head pointer
 *@n: Element to be addded
 *Return: address to new element or NULL if fails
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *tail;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	if (*head == NULL)
	{
		new->n = n;
		new->next = NULL;
		*head = new;
		return (new);
	}
	tail = *head;
	while (tail->next != NULL)
	{
		tail = tail->next;
	}
	new->n = n;
	new->next = NULL;
	tail->next = new;

	return (new);

}
