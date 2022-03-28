#include "main.h"

/**
 * *_memset - fills the first n bytes with b
 * n: the given filling bytes
 * b: The byte to fill
 *
 * Return: modigied pointer to string
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s [i] = b;
	}

return (s);
}
