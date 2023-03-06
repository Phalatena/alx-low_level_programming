#include "main.h"
#include <stdio.h>
/**
 *_memset - function that fill memory with constant byte
 *@n:function fills the first
 *@s:bytes of the memory area pointed
 *@b:with the constant byte b
 *Return: pointer
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
