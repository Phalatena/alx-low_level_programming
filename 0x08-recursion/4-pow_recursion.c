#include "main.h"
#include <stdio.h>
/**
 *_pow_recursion - function that return the value of x raised to power y.
 *@x: value raised
 *@y: power
 *Return: value
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
