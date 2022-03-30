#include "main.h"

/**
 * _pow_recursion - Calculates the value of x to poer y
 * @x: base
 * @y: power
 *
 * Return: x to power y
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);

	if (y == 0)
		return (1);

	return (x * _pow_recursion(x, y - 1));
}
