#include <stdio.h>
#include "main.h"

/**
 * main - checks the code
 *
 * Return: Always 0 on Success
 */
int main(void)
{
	char str[] = "Look up!\n";
	char *ptr;

	printf("%s", str);
	ptr = string_toupper(str);
	printf("%s", ptr);
	printf("%s", str);
	return (0);
}
