#include "main.h"
#include <stdio.h>
/**
 *_islower -function that checks lowercase character
 *@c: the char to be checked
 *Return: 1 (success)
*/
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
