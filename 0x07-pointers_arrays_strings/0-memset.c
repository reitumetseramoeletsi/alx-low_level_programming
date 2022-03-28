#include "main.h"

/**
 * *_memset - fills the first n bytes with b
 * @s: Given string
 * @n: the given filling bytes
 * @b: The byte ito fill
 *
 * Return: modified pointer to string
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
