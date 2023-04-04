#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "lists.h"
#include <stddef.h>
#include <stdbool.h>
/**
 * free_listint2 - function that frees a listint_t list.
 * @head:pointer to a pointer to the
 * first node of a linked list.
 */
void free_listint2(listint_t **head)
{
	listint_t *current;

	if (head == NULL)
		return;

	while (*head != NULL)
	{
		current  == *head;
		*head = (*head)->next;
		free(*head);
	}

	*head = NULL;
}
