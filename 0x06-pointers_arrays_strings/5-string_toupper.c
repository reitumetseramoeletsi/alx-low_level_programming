#include "main.h"

/**
 * string_toupper - turns lowercase to uppercase
 * @s:The pointer to the string
 *
 * Return: return an uppercase string
 */
char *string_toupper(char *s)
{
	int i;

	i = 0;
	while (s[i] != '0')
	{
		if (s[i] >= 97)
			s[i] = s[i] - 32;
		i++;
	}
	return (s);
}
