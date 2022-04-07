#include "main.h"
#include <stdlib.h>

/**
 * *realloc - Reallocates memory
 * @ptr:memory allocated before
 * @old_size: size of memory allocated to ptr
 * @new_size: new size of the allocated space
 *
 * Return: Pointer to the new allocated memory or Null
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *npr;
	unsigned int i = 0;
	unsigned int len;

	if (new_size == old_size)
		return (ptr);

	if (new_size == 0 && ptr != NULL)
		return (NULL);

	if (ptr == NULL)
	{
		ptr = malloc(new_size * sizeof(void *));
		if (ptr == NULL)
			return (NULL);
		return (ptr);
	}

	npr = malloc(new_size * sizeof(char));
	if (npr == NULL)
		return (NULL);

	if (new_size < old_size)
		len = new_size;
	if (new_size > old_size)
		len = old_size;

	while (i < len)
	{
		npr[i] = ((char *)ptr)[i];
		i++;
	}
	free(ptr);
	return (npr);
}
