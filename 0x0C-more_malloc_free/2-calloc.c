#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 *_calloc - function that allocates memory for an array, using malloc.
 *@nmemb: number of elements in the array
 *@size: size of each element
 *Return: pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(size * nmemb);
	if (ptr == NULL)
		return (NULL);
	memset(ptr, 0, nmemb * size);
	return (ptr);
}
