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

	if (d->name ==  NULL)
		printf("Name : (nil)\n");
	else
		printf("Name: %s\n", d->name);
	:wq

	printf("Age: %.6f\n", d->age);

	if (d->owner == NULL)
		printf("owner: (nil)\n");
	else
		printf("Owner: %s\n", d->owner);
}
