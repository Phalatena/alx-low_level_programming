#include <include.h>
/**
 *main - Entry point program that prints the lowercase alphabet in reverse
 *Return: 0 (success)
*/
int main(void)
{
	char ch;

	for (ch = 'z'; ch >= 'a'; ch--)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
