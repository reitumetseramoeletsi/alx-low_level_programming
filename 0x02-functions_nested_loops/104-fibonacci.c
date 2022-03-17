#include <stdio.h>

/**
 * main - Print fibonacci
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	unsigned long long int  n1, n2, next;
	int i;

	n1 = 1;
	n2 = 2;
	next = n1 + n2;
	i = 3;

	printf("%llu, %llu ", n1, n2);
	while (i < 98)
	{
		printf("%llu, ", next);
		n1 = n2;
		n2 = next;
		next = n1 + n2;
		i++;
	}
	printf("%.0fn", next);
	return (0);
}
