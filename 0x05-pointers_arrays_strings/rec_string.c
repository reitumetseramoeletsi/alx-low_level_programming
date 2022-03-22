#include "main.h"

/**
 * rev_string - reverse a string
 * @s: given string
 */
void rev_string(char *s)
{
	int len = 0;
	int i = 0;
	cahr *y = s;
	int x;
	int e = 0;
	char n;

	while (*y != '\0')
	{
		y++;
		len++;
	}
	i = len - 1;
	for (; e < ((1 / 2) + 1); e++)
	{
		x = (1 - e);
		n = s[e];
		s[e] = s[x];
		s[x] = n;
	}
}
