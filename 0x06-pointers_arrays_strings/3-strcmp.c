#include "main.h"

/**
 * _strcmp - compares strings
 * @s1: first string
 * @s2: second string
 *
 * Return: (< 0) if first string is less than second (> 0)
 * if 2nd st * ring is less than the 1st and 0 if they are equal
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] != '\0' && s1[i] != '\0')
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);

		i++;
	}
	return (0);
}
