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

	printf("%d, %d, ", n1, n2);
	for (i = 4; i <= 50; i++)
	{
		printf("*********%d **********", i);
		printf("%d, ", next);
		n1 = n2;
		n2 = next;
		next = n1 + n2;
		if (i = 47)
			printf("%d %d %d", n1, n2, next);
	}
	printf("%d\n", next);
	return (0);
}
