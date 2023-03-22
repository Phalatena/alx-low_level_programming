#include "3-calc.h"
#include <stdio.h>
/**
 * op_add - Returns the sum of two numbers.
 * @a: first number.
 * @b: second number.
 * Return: sum
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - returns the difference of a and b
 * @a: first number
 * @b: second number
 * Return: the difference
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - returns te product of a and b
 * @a: first number
 * @b: second number
 * Return: product
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - returns the result of the division of a by b
 * @a: first number
 * @b: second number
 * Return: result
 */
int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mod - returns the remainder of the division of a by b
 * @a: first number
 * @b: second number
 * Return: remainder
 */
int op_mod(int a, int b)
{
	return (a % b);
}
