#include "main.h"
#include <stdlib.h>

/**
 * *create_array - creates an array of a given charecter
 * @size: The size of the array
 * @c: The given charecter
 *
 * Return: A pointer to the array, NULL if the size is zero and if failed
 */
char *create_array(unsigned int size, char c)
{
	char *ar;
	unsigned int i = 0;

	if (size == 0)
		return (NULL);

	ar = malloc(size * sizeof(char));

	if (ar == NULL)
		return (NULL);

	while (i < size)
	{
		ar[i] = c;
		i++;
	}
	return (ar);
}
