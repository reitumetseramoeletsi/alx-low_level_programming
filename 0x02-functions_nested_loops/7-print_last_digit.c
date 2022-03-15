#include "main.h"

/**
 * print_last_digit - Print the last digit of a number
 *
 * @n: A given number
 *
 * Return: return last digit
 */
int print_last_digit(int n)
{
	n = n % 10;
	_putchar(n);
	return (n);
}
