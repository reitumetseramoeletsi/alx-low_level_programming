#include <stdio.h>

/**
 * main - Print fibonacci
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n1, n2, next, i;

	n1 = 1;
	n2 = 2;
	next = n1 + n2;
	i = 3;

	printf("%d, %d, ", n1, n2);
	while (i < 98)
	{
		printf("%d, ", next);
		n1 = n2;
		n2 = next;
		next = n1 + n2;
		i++;
	}
	printf("%d\n", next);
	return (0);
}
