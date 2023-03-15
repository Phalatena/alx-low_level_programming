#include "main.h"
#include <stdio.h>
/**
 *main - program that print the number of arguments passed into it
 *@argc: count numbers
 *@argv: array
 *Return: number
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
