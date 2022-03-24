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
	int j;

	i = 0;
	j = 0;
	while (s1[i] != '\0')
	{
		i++;
	}
	while (s2[j] != '\0')
	{
		j++;
	}

	if (i < j)
		return (-15);

	else if (j < i)
		return (15);

	else
		return (0);
}
