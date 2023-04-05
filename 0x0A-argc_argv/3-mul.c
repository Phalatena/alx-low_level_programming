#include <stdarg.h>
#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - program that multiplies two numbers.
 * @argc: count
 * @argv: vector
 * Return: 1
 */
int main(int argc, char *argv[])
{
	int num1 = atoi(argv[1]);
	int num2 = atoi(argv[2]);
	int result = num1 * num2;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else if (num1 == 0 || num2 == 0)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", result);
	return (0);
}
