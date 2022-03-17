#include <stdio.h>

/**
 * main - Print fibonacci
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	unsigned int n1, n2, next;

	n1 = 1;
	n2 = 2;
	next = n1 + n2;

	printf("%u, %u, ", n1, n2);
	for (i = 4; i <= 50; i++)
	{
		printf("%u, ", next);
		n1 = n2;
		n2 = next;
		next = n1 + n2;
	}
	printf("%u\n", next);
	return (0);
}
