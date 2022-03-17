#include <stdio.h>

/**
 * main - Print fibonacci
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	double n1, n2, next;
	int i;

	n1 = 1;
	n2 = 2;
	next = n1 + n2;
	i = 3;

	printf("%.0f, %.0f ", n1, n2);
	while (i < 98)
	{
		printf("%.0f, ", next);
		n1 = n2;
		n2 = next;
		next = n1 + n2;
		i++;
	}
	printf("%.0f\n", next);
	return (0);
}
