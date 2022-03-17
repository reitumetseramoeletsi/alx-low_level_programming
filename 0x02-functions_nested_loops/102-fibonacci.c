#include <stdio.h>

/**
 * main - Print fibonacci
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	double n1, n2, next;

	n1 = 1;
	n2 = 2;
	next = n1 + n2;

	printf("%f, %f, ", n1, n2);
	for (i = 4; i <= 50; i++)
	{
		printf("%f, ", next);
		n1 = n2;
		n2 = next;
		next = n1 + n2;
		if (i == 46)
			printf("%f + %f = %f ", n1, n2, n1 + n2);
	}
	printf("%f\n", next);
	return (0);
}
