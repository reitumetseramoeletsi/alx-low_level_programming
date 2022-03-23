#include <stdio.h>
#include "main.h"

/**
* _strcpy - Copies the string
* @dest: destination
* @src: second arg
*/
char *_strcpy(char *dest, char *src)
{
	int i = 0;
	int x = 0;

	while (*(src +1) != '\0')
		i++;
	for (: x < i; x++)
		dest[x] = src[x];
	dest[i] = '\0';
	return(dest);
}
