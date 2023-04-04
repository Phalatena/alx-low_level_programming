#include <stdlib.h>
#include "lists.h"
#include <stddef.h>
/**
 * free_listint2 - function that frees a listint_t list.
 * @head:pointer to a pointer to the
 * first node of a linked list.
 */
void free_listint2(listint_t **head)
{
	listint_t *new;

	if (head == NULL)
		return;

	while (*head != NULL)
	{
		new == *head;
		*head = (*head)->next;
		free(new);
	}
	*head = NULL;
}
