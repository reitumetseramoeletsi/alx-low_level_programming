#include "function_pointers.h"
#include <stddef.h>

/**
 * array_iterator - Excecutes a given function on each elements on an array
 * @array: The array given
 * @size: size of the given array
 * @action: The given fuction
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (action != NULL && array != NULL)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
