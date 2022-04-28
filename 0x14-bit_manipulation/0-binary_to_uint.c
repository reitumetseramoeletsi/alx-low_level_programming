#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * binary_to_uint - converts a binary number to an unsigned int number
 * @b: The pointer to a string of 0 and 1 chars
 *
 * Return: The converted number or 0 if b is NULL or has a
 * char that is not 0 or 1
 *
 */
unsigned int binary_to_uint(const char *b)
{
	char *ptr;
	int i, len, pwr, num = 1;
	unsigned int dec = 0;

	for (i = 0; b[i] != 0; i++)
		;
	if (b == NULL)
		return (0);
	len = i - 1;
	ptr = malloc(sizeof(char) * len);
	if (ptr == NULL)
		return (0);

	for (i = 0; i <= len; i++)
		ptr[i] = b[i];
	for (i = 0; i <= len; i++)
	{
		pwr = len - i;
		if (ptr[i] != '0' && ptr[i] != '1')
			return (0);

		if (pwr == 0)
			num = 1;
		while (pwr > 0)
		{
			num = num * 2;
			pwr--;
		}
		dec = dec + (ptr[i] - '0') * num;
		num = 1;
	}
	return (dec);
}
