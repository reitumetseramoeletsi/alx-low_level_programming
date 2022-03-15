#include <stdio.h>

/**
 * print_to_98 - Prints natural numbers to 98
 *
 * @n: Input number
 */
void print_to_98(int n)
{
	int i;

	for (i = n; i < 99; i++)
	{
		if (i < 98)
		printf("%d, ", n);
	}
}
