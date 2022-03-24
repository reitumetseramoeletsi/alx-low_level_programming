#include "main.h"

/**
 * *_strcat - appends two strings
 * @dest: first string to be appended on
 * @src: the second string
 *
 * Return: a pointer to the product tring
 */
char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j;

	while(dest[i] != '\0')
		i++;
	
	j = 0;
	while(src[j] != '\0')
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = '\0';

return (dest);
}
