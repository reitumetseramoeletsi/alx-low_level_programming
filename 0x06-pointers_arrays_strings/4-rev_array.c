#include "main.h"

/**
 * reverse_array - prints string in reverse
 * @a:The array of integers
 * @n:The length of the array
 */
void reverse_array(int *a, int n)
{
	int i;
	int temp;

	for (i = 0; i < n--; i++)
	{
		temp = a[i];
		a[i] = a[n];
		a[n] = temp;
	}
}
