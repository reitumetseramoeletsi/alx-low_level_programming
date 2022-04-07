#include "main.h"
#include <stdlib.h>

/**
 * *array_range - create an array of integers
 * @min: minimum number
 * @max: maximum number
 *
 * Return: pointer to the array or null
 */
int *array_range(int min, int max)
{
	int *ar;
	int i = min;
	int len = 0;

	if (min > max)
		return (NULL);

	while (i <= max)
	{
		len++;
		i++;
	}
	ar = malloc(sizeof(int) * len);

	if (ar == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
	{
		ar[i] = min;
		min++;
	}
	return (ar);
}
