#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
#include <stddef.h>
/**
 * free_listint2 - function that frees a listint_t list.
 * @head:pointer to a pointer to the first node of a linked list
 * Return: 0
 */
void free_listint2(listint_t **head)
{
	listint_t *new_node;

	if (head == NULL)
	{
		return;
	}
	while (*head != NULL)
	{
		new_node == *head;
		*head = (*head)->next;
		free(new_node);
	}
	*head = NULL;
}
