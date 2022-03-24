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
	int i;
	int j = 0;

	char c[14] = {" \t\n,;.!?\"(){}"};

	while (s[j] != '\0')
	{
		for (i = 0; i < 13; i++)
		{
			if (s[j] == c[i] && s[j + 1] >= 97)
			{
				s[j + 1] = s[(j + 1) - 32];
			}	
		}
		j++;
	}
	
	return (s);
}
