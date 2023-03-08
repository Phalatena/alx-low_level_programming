#include "main.h"
#include <stdio.h>
/**
 *_strlen_recursion - function that return the length of a string
 *@s: string to be measured
 *Return: length
 */
int _strlen_recursion(char *s)
{
	int phala = 0;

	if (*s)
	{
		phala++;
		phala += _strlen_recursion(s + 1);
	}
	return (phala);
}
