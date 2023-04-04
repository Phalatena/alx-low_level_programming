#include <stddef.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * sum_listint - function that returns the sum of all
 * the data (n) of a listint_t linked list.
 * @head: pointer to the first node.
 * Return: sum of all data or 0.
 */
int sum_listint(listint_t *head)
{
	listint_t *phala = head;
	int sum = 0;

	while (phala != NULL)
	{
		sum += phala->n;
		phala = phala->next;
	}
	return (sum);
}
