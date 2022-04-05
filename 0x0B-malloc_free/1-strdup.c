#include "main.h"
#include <stdlib.h>

/**
 * *_strdup - Creates a copy of a string
 * @str: The givenstring to be duplicated
 *
 * Return: The ponter to the duplicate
 */
char *_strdup(char *str)
{
	char *strcpy;
	int i = 0;
	int j = 0;
	int len = 0;

	if (str == NULL)
		return (NULL);

	while (str[i] != '\0')
	{
		len++;
		i++;
	}
	
	strcpy = malloc(len * sizeof(char));

	if (strcpy == NULL)
		return (NULL);

	while (j <= len)
	{
		strcpy[j] = str[j];
		j++;
	}
	return (strcpy);
}
