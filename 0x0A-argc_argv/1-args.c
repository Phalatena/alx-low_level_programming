#include "main.h"
#include <stdio.h>
/**
 *main - program that print the number of arguments
 *@argc: count
 *@argv:array
 *Return: number
 */
int main(int argc, char *argv[])
{
	(void) argv; /*Ignore argv*/
	printf("%d\n", argc - 1);
		return (0);
}
