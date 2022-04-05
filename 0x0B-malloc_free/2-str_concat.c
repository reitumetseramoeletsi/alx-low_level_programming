#include "main.h"
#include <stdlib.h>

/**
 * *str_concat - Concatenates two string
 * @s1: The first string
 * @s2: The second string
 *
 * Return: pointer to a new concatenated string or NULL on fail
 */
char *str_concat(char *s1, char *s2)
{
	int i = 0;
	int j = 0;
	int k = 0;

	char *str;
	int len;
	int len1 = 0;
	int len2 = 0;

	while (s1[i] != '\0')
	{
		len1++;
		i++;
	}

	while (s2[j] != '\0')
	{
		len2++;
		j++;
	}
	len = len1 + len2;
	str = malloc(len * sizeof(char));

	if (str == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		str[i] = s1[i];

	while (i <= len)
	{
		str[i] = s2[k];
		i++;
		k++;
	}
	return (str);

}
