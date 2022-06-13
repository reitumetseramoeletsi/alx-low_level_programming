#include "main.h"

/**
 * _isalpha - checks if c is a lowercase charecter
 *
 * @c: - given charecter
 *
 * Return: 1 if lower and 0 if not lower
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return (1);
	else
		return (0);
	_putchar('\n');
}
