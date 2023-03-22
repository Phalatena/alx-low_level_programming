#include "function_pointers.h"
#include <stdio.h>
/**
 * int_index - function that search for an integer
 * @array: input
 * @size: number of elem
 * @cmp: pointer
 * Return: -1 if does not match or size <= 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}
