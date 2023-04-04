#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
#include <stddef.h>
/**
 * get_nodeint_at_index - function that returns the nth
 * node of a listint_t linked list.
 * @head:pointer to the first node of a linked list
 * @index:the first node in the list is 0.
 * Return:the nth node or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int n;
	listint_t *new = head;

	for (n = 0; new != NULL && n < index; n++)
		new = new->next;

	if (n == index)
	{
		return (new);
	}
	return (NULL);
}
