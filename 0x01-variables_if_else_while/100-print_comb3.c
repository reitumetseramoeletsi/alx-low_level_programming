#include <stdio.h>

/**
 * main - Entry poin
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num1;
	int num2;

	for (num1 = 0; num1 <= 9; num1++)
	{
		for (num2 = num1 + 1; num2 <= 9; num2++)
		{

			if (!(num1 == 9 && num2 == 9) && !(num1 == 0 && num2 == 1))
			{
				putchar(',');
				putchar(' ');
			}
			putchar(num1 + '0');
			putchar(num2 + '0');

			/**
			 * if (!(num1 == 9 && num2 == 9))
			 *{
			 *	putchar(',');
			 *	putchar(' ');
			  }
			 */
		}
	}
	putchar('\n');

return (0);
}
