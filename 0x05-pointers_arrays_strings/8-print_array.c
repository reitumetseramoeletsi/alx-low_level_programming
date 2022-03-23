#include "main.c"

/**
 * print_array - Prints n elements of an array
 * @a: first arg
 * @n: second arg
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; x++)
	{
		printf("%d", a[i]);
		if ( i != n - 1)
			printf(", ");
	}
	printf("\n");
}
