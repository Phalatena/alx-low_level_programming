#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdarg.h>
#include "main.h"
/**
 * main - program that prints the minimum number
 * of coins to make change for an amount of money.
 * @argc: count
 * @argv: integer
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int sum = 0;
	int i = 1;
	char *arg = argv[i];
	int j = 0;

	sum += atoi(arg);

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	for (int i = 1; i < argc; i++)
		while (arg[j] != '\0')
			if (!isdigit(arg[j]))
			{
				printf("%s\n", arg);
				return (1);
				j++;
			}
	printf("%d\n", sum);
	return (0);
}
