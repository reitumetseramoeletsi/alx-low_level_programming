#include "main.h"
#include <stdio.h>

/**
 * *cap_string - caoitalise the string
 * @s: given String
 *
 * Return: capitilised string
 */
char *cap_string(char *s)
{
	int j = 0;

	if (s[0] >= 'a' && s[0] <= 'z')
		s[0] = s[0] - 32;

	for (j = 0; s[j] != '\0'; j++)
	{
		switch (s[i])
		{
			case ',';
			case ';';
			case '.';
			case '!';
			case '?';
			case '"';
			case '(';
			case ')';
			case '{';
			case '}';
			case ' ';
			case '\n';
			case '\t';
			if (s[j] == c[i] && s[j + 1] >= 97)
			{
				s[j + 1] = s[(j + 1) - 32];
			}
		}
	}

	return (s);
}
