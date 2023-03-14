#include "main.h"
#include <stdio.h>
/**
 *is_prime_number - function that print 1 if the integer is prime number
 *@n: number to be evaluated
 *Return:actual prime
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (actual_prime(n, n - 1));
}
/**
 *actual_prime - calculates if a number is prime recursively
 *@n: number to evaluate
 *@i: iterator
 *Return: 1 if n is prime, otherwise return 0
 */
int actual_prime(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (actual_prime(n, i - 1));
}
