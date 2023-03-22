#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - function that print a name.
 * @name: input
 * @f: poiter
 * Return: nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
