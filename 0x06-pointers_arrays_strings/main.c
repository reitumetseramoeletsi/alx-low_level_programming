#include <stdio.h>
#include "main.h"

/**
 * main - checks the code
 *
 * Return: Always 0 on Success
 */
int main(void)
{
	char str[] = "Hello world is:not, I can not imagine.what is happening\n";
	char *ptr;

	ptr = cap_string(str);
	printf("%s", ptr);
	printf("%s", str);

	return (0);
}
