#include "main.h"
#include <stdio.h>
/**
 *_sqrt_recursion - funtion that return the natural square root of a number
 *@n:square root
 *Return:square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (actual_sqrt_recursion(n, 0));
}
/**
 *actual_sqrt_recursion - recurses to find the natural
 *@n:number to calculate the sqaure root
 *@i:iterator
 *Return:resulting square root
 */
int actual_sqrt_recursion(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (actual_sqrt_recursion(n, i + 1));
}
