#include "main.h"

/**
 * print_rev - prints string in reverse
 * @str: The given string
 */
void _puts(char *str)
{
	int i = 0;

	while (*(str + i) != '\0')
	{
		//_putchar(str[i]);
		i++;
	}
	while (i >= 0)
	{
		_putchar(str[i]);
		i--;
	}
	_putchar('\n');
}
