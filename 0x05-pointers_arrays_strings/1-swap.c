#include "main.h"

/**
 * swap_int - A function that swaps two intergers
 *@a: first integer
 *@b: second integerer
 */
void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
