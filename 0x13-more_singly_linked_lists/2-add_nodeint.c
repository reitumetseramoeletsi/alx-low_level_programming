#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/**
 * add_nodeint - add a node at the beggining of a list
 * @head: pointer to the head pointer
 * @n:geven integer to add
 *
 * Return: Adress of the new element or NULL if fail
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	if (*head == NULL)
	{
		new->n = n;
		new->next = NULL;
		*head = new;
		return (*head);
	}
		new->n = n;
		new->next = *head;
		*head = new;
	return (new);
}
