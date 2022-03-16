#include <stdio.h>

/**
 * main - Print fibonacci
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n1, n2, next ,i;
	n1 = 0;
	n2 = 1;
	next = n1 + n2;

	printf("%d, %d, ", n1, n2);
	for (i = 3; i <= 50; i++)
	{
		printf("%d, ", next);
		n1 = n2;
		n2 = next;
		next = n1 + n2;
	}

	return (0);
}
