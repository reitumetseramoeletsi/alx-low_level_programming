#include "lists.h"
#include <stdlib.h>

/**
 * reverse_listint - reverses the list
 * @head: pointer to the head of the list
 *
 * Return: Pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *tmp, *tail;

	if (*head == NULL)
		return (NULL);

	tmp = NULL;
	tail = *head;
	while (tail->next != NULL)
	{
		*head = tail->next;
		tail->next = tmp;
		tmp = tail;
		tail = *head;
	}
	tail->next = tmp;
	*head = tail;
	return (tail);
}
