#include "search_algos.h"
/**
 * linear_search - Function that searches for an interger i an array
 * @array: The given array to be searched
 * @size: Size of the array
 * @value: Value to searched
 *
 * Return: First index where the value is located
 *         -1 if the value is not present or array is null
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			return (i);
		}
	}
	return (-1);
}
