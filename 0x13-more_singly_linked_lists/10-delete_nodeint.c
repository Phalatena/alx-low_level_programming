#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
#include <stddef.h>
/**
 * delete_nodeint_at_index - function that deletes the node
 * at index index of a listint_t linked list.
 * @head: pointer to the head of the linked list.
 * @index: node to be deleted.
 * Return: 1 if succeeded or -1 if failed.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *phala, *last;
	unsigned int y;

	if (*head == NULL)
	{
		return (-1);
	}
	phala = *head;
	last = NULL;
	y = 0;
	while (phala != NULL && y != index)
	{
		last = phala;
		phala = phala->next;
		y++;
	}
	if (phala == NULL)
	{
		return (-1);
	}
	else if (last == NULL)
	{
		*head = phala->next;
	}
	else
	{
		last->next = phala->next;
	}
	free(phala);
	return (1);
}
