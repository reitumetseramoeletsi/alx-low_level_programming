#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always (0) (Success)
 */
int main(void)
{
	int i;
	char put_char[] = "_putchar";

	for (i = 0; i < 8; i++)
		_putchar(put_char[i]);
	_putchar('\n');

	return (0);
}
