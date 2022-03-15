#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always (0) (Success)
 */
int main(void)
{
	char put_char[] = "_putchar";

	for (int i = 0; i < 8; i++)
		_putcharput(put_char[i]);
	_putchar('\n');

	return (0);
}
