#include "main.h"

/**
 * *_strncpy - copies the tring
 * @dest: Destination string
 * @src: Another string
 * @n:given integer
 *
 *Return: Pointer to new string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
