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
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			s = &s[i];

			return (s);
		}
		i++;
	}
	return (0);
}
