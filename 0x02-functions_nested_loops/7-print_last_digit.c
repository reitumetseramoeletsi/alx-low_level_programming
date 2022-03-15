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
	char m;
	m = (n % 10) + '0';
	n = n % 10;
	_putchar(m);
	return (n);
}
