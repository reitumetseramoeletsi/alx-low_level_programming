#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_dog - Print a dog
 * @d:Poiter to the dog
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		exit(98);
	else
	{

	if (d->name != NULL)
		printf("Name: %s\n", d->name);
	else
		printf("Name : (nil)\n");

	printf("Age: %f\n", d->age);

	if (d->owner != NULL)
		printf("Owner: %s\n", d->owner);
	else
		printf("owner: (nil)\n");
	}
}
