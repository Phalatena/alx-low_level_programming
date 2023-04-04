#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
#include <stddef.h>
/**
 * listint_len - function that returns the number
 * of elements in a linked listint_t list.
 * @h: pointer to the head node of the list
 * Return: nuber of element
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h->next;
	}
	return (count);
}
