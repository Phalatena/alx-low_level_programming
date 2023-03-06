#include "main.h"
#include <stdio.h>
/**
 *_memcpy - function that copies memory area
 *@src:memory copied
 *@n:function copies bytes
 *@dest:memory area stored
 *Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int r = 0;
	int i = n;

	for (; r < i; r++)
	{
		dest[r] = src[r];
		n--;
	}
	return (dest);
}
