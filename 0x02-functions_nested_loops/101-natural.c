#include <stdio.h>
/**
 * main Printsnatural numbers
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a, b;

	for (a = 1; a < 1024; a++)
	{
		if ((a % 3) == 0 || (a % 5) == 0)
			b += a;
	}
	printf("%d\n", b);

	return (0);
}
