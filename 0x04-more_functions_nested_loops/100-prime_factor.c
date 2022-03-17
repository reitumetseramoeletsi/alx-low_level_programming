#include <stdio.h>

/**
 * main - entry level
 *
 * Return: Always 0
 */
int main(void)
{
	long i;
	long num;

	num = 612852475143;

	for (i = 2; i <= num; i++)
	{
		if (num % i == 0)
		{
			num = num / i;
			i--;
		}
	}
	printf("%lu\n", i);
	return (0);
}
