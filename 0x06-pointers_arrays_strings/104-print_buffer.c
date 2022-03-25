#include "main.h"
#include <stdio.h>

/**
 * isprintableASCII - tell if n is printable
 * @n:integer
 *
 * Return: 1 if tur, 0 if false
 */

int isprintableASCII(int n)
{
	return (n >= 32 && n <= 126)
}

/**
 * printhexes - print hex
 * @b: given string
 * @start: of a string
 * @end:of a string
 */
void printhexes(char *b, int start, int end)
{	
	int i = 0;

	while (i < 10)
	{
		if (i < end)
			printf("%02x", *(b + start + i));
		else
			printf("  ");
		if (i % 2)
			printf(" ");
		i++;
	}	
}

/**
 * printASCII - print Ascii
 * @b:given string
 * @start: of a string
 * @end:of a string
 */
void printASCII(char *b, int start, int end)
{
	int ch, i = 0;

	while (i < end)
	{
		ch = *(b + i + start);
		if (!isPrintableASCII(ch))
			ch = 46;

		printf("%c", ch);
		i++;
	}
}

/**
 * print_buffer - prints a buffer
 * @b: given string
 * @size: size
 */
void print_buffer(char *b, int size)
{
	int start, end;
	
	if (size > 0)
	{
		for (start = 0; start < size; start += 10)
		{
			end = (size - start < 10) ? size - start : 10;
			printf("%08x: ", start);
			printhexes(b, start, end);
			printASCII(b, start, end);
			printf("\n");
		}
	}
	else
		printf("\n");
}
