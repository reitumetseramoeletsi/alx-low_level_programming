#include <stdio.h>
#include "main.h"

/**
 * main - checks the code
 *
 * Return: Always 0 on Success
 */
int main(void)
{
	char s1[] = "Hello";
	char s2[] = "Hellp";

	printf("%d\n", _strcmp(s1, s2));
	printf("%d\n", _strcmp(s2, s1));
	printf("%d\n", _strcmp(s1, s1));
	return (0);
}
