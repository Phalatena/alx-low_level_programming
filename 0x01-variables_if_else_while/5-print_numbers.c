#include <stdio.h>
/**
 *main - Entry point program that prints all single digit numbers
 *Return: 0 (success)
*/
int main(void)
{
	int n;

	for (n = 0; n < 10; n++)
		printf("%d", n);
	printf("\n");
	return (0);
}
