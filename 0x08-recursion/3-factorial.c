#include "main.h"

/**
 * factorial - print a factorial of a number
 * @n: the given number
 *
 * Return: The factorial
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);

	else if (n == 0)
		return (1);

	return (n * factorial(n - 1));
}
