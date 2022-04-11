#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_dog - Print a dog
 * @d:Poiter to the dog
 */
void print_dog(struct dog *d)
{
	printf("Name: %s\n", d->name);
	printf("Age: %.6f\n", d->age);
	printf("Owner: %s\n", d->owner);
}
