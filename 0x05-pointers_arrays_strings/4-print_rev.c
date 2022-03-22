#include "main.h"

/**
 * print_rev - prints string in reverse
 * @str: The given string
 */
void print_rev(char *str)
{
	int i = 0;

	while (*(str + i) != '\0')
	{
		i++;
	}
	while (i >= 0)
	{
		i--;
		_putchar(str[i]);
	}
	_putchar('\n');
}
