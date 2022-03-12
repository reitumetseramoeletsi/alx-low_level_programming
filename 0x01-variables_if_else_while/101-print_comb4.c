#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num;
	int num2;
	int num3;

	for (num = 0; num1 <= 9; num1++)
	{
	for (num2 = num + 1; num2 <= 9; num2++)
	{
	for (num3 = num2 + 1; num3 <= 9; num3++)
	{
	if (!(num == 9 && num2 == 9 && num3 == 9) && !(num == 0 && num2 == 1 && num3 == 2))
	{
		putchar(',');
		putchar(' ');
	}
		putchar(num1 + '0');
		putchar(num2 + '0');
		putchar(num3 + '0');
	}
	}
	}
	putchar('\n');

return (0);
}
