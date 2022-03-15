#include <stdio.h>

/**
 * print_to_98 - Prints natural numbers to 98
 *
 * @n: Input number
 */
void print_to_98(int n)
{
	int i = n;

	while (!(i == 98))
	{
		if (i < 98)
		{
			printf("%d, ", i);
			i++;
		}
		else 
		{
			printf("%d, ", i);
			i--;
		}
	}
	printf("%d\n", i);
}
