#include "main.h"

/**
 * print_number - prints # using _putchar
 * @n:given argument
 */
void print_number(int n)
{
	int cpy, nth, size=1, ones = n % 10;

	n /= 10;
	if (ones < 0)
	{
		ones *= -1, cpy *= -1, n *= -1;
		_putchar('-');
	}
	if (cpy > 0)
	{
		while (cpy / 10 !=0)
			cpy /= 10, size *= 10;
		while (size > 0)
		{
			nth = n / size;
			_putchar('0' + nth);
			n -= nth * size;
			size /= 10;
		}
	}
	_putchar('0' + ones);
}
