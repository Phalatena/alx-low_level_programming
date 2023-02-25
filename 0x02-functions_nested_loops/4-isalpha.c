#include "main.h"
#include <stdio.h>
/**
 *_isalpha -function that check for alphabetic character
 *@c: check for alphabetic char
 *Return: 1 if c is a letter, 0 otherwise
*/
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
