#include "main.h"
#include <stdio.h>
/**
 * *_strchr - Locates a charecter
 * @s: Given string
 * @c: Charecter to be located
 *
 * Return: Pointer to the first ocurance or Null if not found
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}
		s++;
	}
	if (c = '')
		return (s);

	return (NULL);
}
