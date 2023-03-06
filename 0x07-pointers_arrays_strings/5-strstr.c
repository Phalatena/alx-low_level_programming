#include "main.h"
#include <stdio.h>
/**
 *_strstr -function that locate substring
 *@needle:first occurrence of the substring
 *@haystack:input
 *Return: pointer to the beginning of the substring
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *l = haystack;
		char *p = needle;

		while (*l == *p && *p != '\0')
		{
			l++;
			p++;
		}
		if (*p == '\0')
			return (haystack);
	}
	return (0);
}
