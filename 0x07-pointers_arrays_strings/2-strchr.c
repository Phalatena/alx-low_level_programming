#include "main.h"
#include <stdio.h>
/**
 *_strchr -funtion that locates a character in a string
 *@c:pointer at the first occurrenceor the character
 *@s:in the string
 *Return: pointer
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	for (; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}
	return (0);
}
