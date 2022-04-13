#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 * print_name - Prints a name
 * @name: The given name
 * @f: given function
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && *name != '\0' && f != NULL)
		f(name);
}
