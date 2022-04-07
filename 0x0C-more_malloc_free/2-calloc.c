#include "main.h"
#include <stdlib.h>

/**
 * *_calloc - Allocate memory for an array
 * @nmemb: Number of members
 * @size: Size of each member
 *
 * Return: pointer to the memory allocated
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *mem;
	unsigned int i = 0;

	if (nmemb == 0 || size == 0)
		return (NULL);

	mem = malloc(nmemb * size);

	if (mem == NULL)
		return (NULL);

	while (i < nmemb * size)
	{
		mem[i] = 0;
		i++;
	}
	return (mem);
}
