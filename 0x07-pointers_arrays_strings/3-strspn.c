#include "main.h"

/**
 * _strspn - calculates the size of a string prefix
 * @s: the given string
 * @accept: the prefix
 *
 * Return: the size of the prefix
 */
unsigned int _strspn(char *s, char *accept)
{
	int i;
	int j;
	unsigned int size = 0;

	for (i = 0; s[i] != '\0'; i++ )
	{
		for (j = 0; accept[j] != '\0' && accept[j] != s[i]; j++)
			;
			if (s[i] == accept[j])
				size++;
			if (accept[j] == '\0')
				return (size);
	}
	return (size);
}
