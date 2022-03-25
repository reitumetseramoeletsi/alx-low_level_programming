#include "main.h"

/**
 * leet - encodes a string
 * @s: a given string
 *
 * Return: encoded string
 */
char *leet(char *s)
{
	int j = 0;
	int i = 0;

	char c[21] = "a4A4e3E3o0O0t7T7l1L1";

	while (s[i] != '\0')
	{
		while (c[j] != '\0')
		{
			if (s[i] == c[j])
			{
				s[i] = c[j + 1];
			}
			j++;
		}
		i++;
	}
	return (s);
}
