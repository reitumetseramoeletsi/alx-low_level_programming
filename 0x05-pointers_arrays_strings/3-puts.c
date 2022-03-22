#include "main.h"

/**
 * _puts - prints string 
 * @str: The given string
 */
void _puts(char *str)
{
	int i;

	while (*(str + i) != '\0')
	{
		_putchar(str[i]);
		i++;
	}
}
