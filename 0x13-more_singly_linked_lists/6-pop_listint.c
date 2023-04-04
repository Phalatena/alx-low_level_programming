#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
#include <stddef.h>
/**
 * pop_listint - function that deletes the head node
 * of a listint_t linked list, and
 * returns the head node’s data (n).
 * @head:pointer to a pointer to the first node
 * Return:  returns the head node’s data (n) or 0
 */
int pop_listint(listint_t **head)
{
	listint_t *current;
	int num;

	if (head == NULL || *head == NULL)
	{
		return (0);
	}
	current = *head;
	*head = (*head)->next;
	num = current->n;
	free(current);

	return (num);
}
