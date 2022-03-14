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

	for (num = 0; num <= 9; num++)
	{
	for (num2 = num + 1; num2 <= 9; num2++)
	{
	for (num3 = num2 + 1; num3 <= 9; num3++)
	{
	/**
	*if (!(num == 9 && num2 == 9 && num3 == 9) && !(num == 0 && num2 == 1 && num3 == 2))
	*{
	*	putchar(',');
	*	putchar(' ');
	}
	*/
		putchar(num + '0');
		putchar(num2 + '0');
		putchar(num3 + '0');

		if (num == 7 && num2 == 8 && num3 == 9)
		continue;

		putchar(',');
		putchar(' ');

	}
	}
	}
	putchar('\n');

return (0);
}
