#include "main.h"

/**
 * _abs - Prints absolute number of a number
 *
 *@n: Parameter given to abs
 *
 * Return: absolute number
 */
int _abs(int n)
{
	if (n == 0)
		return (0);
	if (n < 0)
		return (n * -1);
	else
		return (n);
	_putchar('\n');
}
