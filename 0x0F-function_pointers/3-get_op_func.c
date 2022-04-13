#include "3-calc.h"
#include <stdlib.h>

/**
 * get_op_func - Selects the correct function to perform the operation
 * @s: The operator
 *
 * Return: Pointer to the fucntion that corresponds to the chosen operator
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i = 0;

	if (*s != '+' && *s != '-' && *s != '*' && *s != '/' && *s != '%')
		return (NULL);

	while (*(ops[i].op) != *s)
		i++;
	return (ops[i].f);
}
