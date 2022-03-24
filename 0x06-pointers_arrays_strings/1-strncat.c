#include "main.h"

/**
 * *_strncat - concatenates srtings only n bytes of the other
 * @dest: The destination string
 * @src: The first string
 * @n: n bytes to concatenate
 *
 * Return: a pointer to the resulting string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j;

	while (dest[i] != '\0')
		i++;

	j = 0;
	while (j < n)
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = '\0';

return (dest);
}
