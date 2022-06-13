#include <stdio.h>
#include "main.h"

/**
* _strcpy - Copies the string
* @dest: destination
* @src: second arg
*
* Return: Poiter to dest
*/
char *_strcpy(char *dest, char *src)
{
	int i = 0;
	int x = 0;

	while ((src[i]) != '\0')
		i++;
	for (; x < i; x++)
		dest[x] = src[x];
	dest[x] = '\0';

	return (dest);
}
