#include "main.h"

/**
 * _islower - checks if c is a lowercase charecter
 *
 * @c: - given charecter
 *
 * Return: 1 if lower and 0 if not lower
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
	_putchar('\n');
}
