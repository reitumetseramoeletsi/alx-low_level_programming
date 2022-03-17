#include <stdio.h>

/**
 * main - Print fibonacci
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n1, n2, next, sum;

	n1 = 1;
	n2 = 2;
	next = n1 + n2;
	sum = 2;

	while (next < 4000000)
	{
		if (next % 2 == 0)
			sum += next;
		n1 = n2;
		n2 = next;
		next = n1 + n2;
	}
	printf("%d\n", sum);
	return (0);
}
