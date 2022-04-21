#include <stdio.h>

/**
 * before_main - prints before excecution of main
 */

void b(void) __attribute__ ((constructor));

void b(void)
{
	printf("You're beat! and yet, you must allow,");
	printf("\nI bore my house upon my back!\n");
}
