#include "main.h"
/**
 *rev_string - Reverses a string
 *@s: Input string
 *Return: String in reverse
 */
void rev_string(char *s)
{
	char rev = s[0];
	int meet  = 0;
	int i;

	while (s[meet] != '\0')
		meet++;
	for (i = 0; i < meet; i++)
	{
		meet--;
		rev = s[i];
		s[i] = s[meet];
		s[meet] = rev;
	}
}
