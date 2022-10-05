#include "search_algos.h"

/**
 * print_array - The function that prints the array
 * @array: The array to be printed
 * @start: Of an array
 * @end: Of an array
 *
 * Return: nothing
 */
void print_array(int *array, size_t start, size_t end)
{

	unsigned int i;

	printf("Searching in array: ");
	for (i = start; i < end; i++)
	{
		printf("%d, ", array[i]);
	}
	printf("%d\n", array[end]);
}

/**
 * binary_search - The function that perfoms the search
 * @array: The array to be searched on
 * @size: The size of the array
 * @value: The value to be searched
 *
 * Return: The indest of the first instanse or -1
 */

int binary_search(int *array, size_t size, int value)
{
	unsigned int left = 0, right;
	int middle;

	right = size - 1;

	if (array == NULL || value == 0)
		return (-1);
	if (size == 1)
	{
		return (array[left]);
	}
	while (right >= left)
	{
		if (left == 0 && right == 0)
			return (-1);
		print_array(array, left, right);
		middle = (right + left) / 2;
		if (array[middle] == value)
			return (array[middle]);
		else if (array[middle] < value)
		{
			left = middle + 1;
		}
		else if (array[middle] > value)
		{
			right = middle;
		}
	}
	return (-1);
}
