#include <stdio.h>
#include "main.h"

/**
 * main - checks the code
 *
 * Return: Always 0 on Success
 */
int main(void)
{
	char s1[98] = "Hello ";
	char s2[] = "World!\n";
	char *ptr;

	printf("%s\n", s1);
	printf("%s\n", s2);
	ptr = _strncat(s1, s2, 1);
	printf("%s\n", s1);
	return (0);
}
