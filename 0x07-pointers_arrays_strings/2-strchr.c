#include "main.h"

/**
 * *_strchr - Locates a charecter
 * @s: Given string
 * @c: Charecter to be located
 *
 * Return: Pointer to the first ocurance or Null if not found
 */
char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s == c)
		{
			return (s);
		}
	s++;
	}
	if (!c)
	{
		return (s);
	}
	return (NULL);
}
