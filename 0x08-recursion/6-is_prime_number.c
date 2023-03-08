#include "main.h"
#include <stdio.h>
/**
 *is_prime_number - function that print 1 if the integer is prime number
 *@n: number to be evaluated
 *Return: 1 if is an integer or zero if not.
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (prime_number(n, n - 1));
}
