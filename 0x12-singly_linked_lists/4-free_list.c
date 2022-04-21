#include "lists.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * free_list - Frees the memory allocated to list
 * @head: head of the list
 *
 * Return: nothing
 */
void free_list(list_t *head)
{
	if (head != NULL)
	{
		free_list(head->next);
		free(head->str);
		free(head);
	}
}
