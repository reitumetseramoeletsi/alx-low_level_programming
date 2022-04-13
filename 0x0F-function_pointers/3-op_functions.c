#include "3-calc.h"
#include <stdlib.h>

/**
 * op_add - adds two integers
 * @a: first integer
 * @b: Second Integer
 *
 * Return: the sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Calculates the difference between a and b
 * @a: first number
 * @b: second number
 *
 * Return: The difference between a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Calculates the product of a and b
 * @a: first number
 * @b: second number
 *
 * Return: The product a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}


/**
 * op_div - Divides a by b
 * @a: first number
 * @b: second number
 *
 * Return: a devided by b
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - Calculates the modulus of a and b
 * @a: first number
 * @b: second number
 *
 * Return: The modulus of a and b
 */
int op_mod(int a, int b)
{
	return (a % b);
}
