#include "main.h"
#include <stdio.h>
/**
 *_strpbrk - function that search a string for any of a set of bytes.
 *@s:first occurrence in the string
 *@accept:any of the bytes in the string
 *Return: pointer to the byte
 */
char *_strpbrk(char *s, char *accept)
{
		int k;

		while (*s)
		{
			for (k = 0; accept[k]; k++)
			{
			if (*s == accept[k])
			return (s);
			}
		s++;
		}

	return ('\0');
}
