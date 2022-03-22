#include "main.h"

/**
 * puts2 - print every other charecter in string
 * @str: given string
 */
void puts2(char *str)
{
	int len = 0;
	int i = 0;
	char *y = str;
	int z;

	while (*y != '\0')
	{
		y++;
		len++;
	}
	i = len - 1;
	for (z = 0; z <= i; z++)
	{
		if (z % 2 == 0)
		{
			_putchar(str[z]);
		}
	}
	_putchar('\n');
}
