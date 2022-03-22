#include "main.h"

/**
 * print_rev - prints string in reverse
 * @str: The given string
 */
void print_rev(char *str)
{
	/**
	int i = 0;

	while (*(str + i) != '\0')
	{
		i++;
	}
	while (i >= 0)
	{
		_putchar(str[i]);
		i--;
	}
	*/
	int i;

	for(i = 0; str[i] != '\0'; i++)
	{
	}
	for (i = i - 1; i >= 0; i++)
		_putchar(str[i]);
       	_putchar('\n');
}
