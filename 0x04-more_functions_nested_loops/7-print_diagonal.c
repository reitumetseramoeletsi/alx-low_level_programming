#include "main.h"

/**
 * print_diagonal - prints numbers from 0-14 10x
 */
void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
	{
		_putchar('\n');
	}

	for (i = 0; i < n; i++)
	{
		for (j = 0; j <= i; j++)
		{
			if (i == j)
			{
				_putchar('\\');
				_putchar('\n');
			}
			else
				_putchar(' ');
		}

	}
}

