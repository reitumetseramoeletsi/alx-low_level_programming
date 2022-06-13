#include "main.h"

/**
 * _strlen - A function that prints the lenth of a string
 * @s:The given string
 *
 * Return: The size of the string
 */
int _strlen(char *s)
{
	int size = 0;

	while (*s != '\0')
	{
		s++;
		size++;
	}
return (size);
}
