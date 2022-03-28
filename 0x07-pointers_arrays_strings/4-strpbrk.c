#include "main.h"
#include <stddef.h>
/**
 * _strpbrk - searches a string for any set of bytes
 * @s: given string
 * @accept: set of bytes containing character to match
 *
 * Return: a pointer to the byte in s that matches one of the bytes in accept
 * else returns NULL
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int i;
	unsigned int j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
				return (&s[i]);
		}
	}
	return (NULL);
}
