#include "function_pointers.h"
#include <stdlib.h>

/**
 * int_index - Searches an array for the given integer
 * @array: The given array
 * @size: The size of the array
 * @cmp: The given function to compare
 *
 * Return: the index of the integer or -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0 || array == NULL || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
		return (i);
	}
	return (-1);
}
