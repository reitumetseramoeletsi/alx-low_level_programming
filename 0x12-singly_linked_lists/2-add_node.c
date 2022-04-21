#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * add_node - Adds node at the beginning of a list
 * @*head: pointer to the head pointer
 * @str: string element to add
 *
 * Return: returns the address of the new element
 */
list_t *add_node(list_t **head, const char *str)
{
	char *s;
	size_t l = 0, i = 0;
	list_t *new;

	while (str[i] != '\0')
	{
		i++;
		l++;
	}
	s = malloc(l + 1 * sizeof(char));

	if (s == NULL || head == NULL)
		return (NULL);

	for (i = 0; str[i] < l; i++)
	{
		s[i] = str[i];
	}

	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		free(s);
		return (NULL);
	}
	new->str = s;
	new->len = l;
	new->next = *head;
	*head = new;

	return (new);
}
