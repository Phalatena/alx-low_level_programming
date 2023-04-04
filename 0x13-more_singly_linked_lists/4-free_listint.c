#include <stddef.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * free_listint - function that frees a listint_t list.
 * @head:pointer to the next node in the list
 * Return: 0
 */
void free_listint(listint_t *head)
{
	listint_t *new_node;

	while (head != NULL)
	{
		new_node = head;
		head = head->next;
		free(new_node);
	}
}
