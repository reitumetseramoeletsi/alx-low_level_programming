#include <stdio.h>
#include "main.h"

/**
 * main - checks code
 *
 * Return: Always 0;
 */
int main(void)
{
	char s[] = "Expect the best. Prepare for the worst";
	char *p;
	
	p = leet(s);
	printf("%s", p);
	printf("%s", s);
	return (0);
}
