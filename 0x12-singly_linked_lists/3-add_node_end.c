#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * add_node_end - Adds node at the end of the list
 * @head: the given head of list
 * @str: the string to add
 *
 * Return: address of the new element
 */
list_t *add_node_end(list_t **head, const char *str)
{
	char *s;
	list_t *new, *current;
	size_t i = 0, l = 0;

	while (str[i] != '\0')
	{
		i++;
		l++;
	}
	s = malloc(l + 1 * sizeof(char));
	if (s == NULL)
		return (NULL);
	for (i = 0; i < l; i++)
	{
		s[i] = str[i];
	}

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->str = s;
	new->len = l;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (*head);
	}
	current = *head;
	while (current->next != NULL)
	{
		current = current->next;
	}
	current->next = new;

	return (new);
}
