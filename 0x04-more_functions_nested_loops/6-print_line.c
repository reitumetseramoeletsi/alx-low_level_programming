#include "main.h"

/**
 * print_line - prints numbers from 0-9
 * @n: interger of _
 */
void print_line(int n)
{
	char c;

	for (c = 0; c < n; c++)
		_putchar('_');
	_putchar('\n');
}

