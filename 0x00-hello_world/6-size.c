#include <stdio.h>

/**
 * main -Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char Mychars;
	int Myint;
	long Mylong;
	long long Mylonglong;
	float Myfloat;

	printf("Size of a char: %lu byte(s)\n", sizeof(Mychars));
	printf("Size of an int: %lu byte(s)\n", sizeof(Myint));
	printf("Size of a long int: %lu byte(s)\n", sizeof(Mylong));
	printf("Size of a long long int: %lu byte(s)\n", sizeof(Mylonglong));
	printf("Size of a float: %lu byte(s)\n", sizeof(Myfloat));

	return (0);
}
