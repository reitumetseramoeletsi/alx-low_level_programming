#include "main.h"

/**
 * *_memcpy - Copies a memory into another
 * @dest: destination string
 * @src: string to be copied
 * @n: number of bytes to be copied
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

return (dest);
}

