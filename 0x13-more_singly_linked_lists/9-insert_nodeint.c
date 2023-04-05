#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
#include <stddef.h>
/**
 * insert_nodeint_at_index - function that inserts a new
 * node at a given position.
 * @head: pointer to the head of the linked list.
 * @idx: the index of the list where the
 * new node should be added.
 * @n: integer
 * Return:address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *x_node, *phala;
	unsigned int y;

	if (head == NULL)
	{
		return (NULL);
	}
	x_node = malloc(sizeof(listint_t));
	if (x_node == NULL)
	{
		return (NULL);
	}
	x_node->n = n;
	if (idx == 0)
	{
		x_node->next = *head;
		*head = x_node;
		return (x_node);
	}
	phala = *head;
	for (y = 0; y < idx - 1 && phala != NULL; y++)
	{
		phala = phala->next;
	}
	if (phala == NULL)
	{
		return (NULL);
	}
	x_node->next = phala->next;
	phala->next = x_node;
	return (x_node);
}
