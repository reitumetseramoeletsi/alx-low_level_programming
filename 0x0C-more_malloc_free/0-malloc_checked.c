#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * malloc_checked - Allocates memory using malloc
 * @b:Given amount
 *
 * Return: Pointer to allocated memory or sxit with 98
 */
void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	
	if (p == NULL)
		exit(98);
	return (p);
}
