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

	int i;

	for (i = 0; s[i] != '\0' ; i++)
	{
		if (s[i] == c)
		return (&s[i]);
	}
	return (0);
}
