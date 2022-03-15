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

	n = n % 10;
	if (n < 0)
	{
		n = n * -1;
		_putchar(n + '0');
	}
	else
		_putchar(n + '0');
	return (n);
}
