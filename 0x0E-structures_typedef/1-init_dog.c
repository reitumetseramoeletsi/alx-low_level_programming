#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * init_dog - initialises a variable of type struct
 * @d: pointer to the struct
 * @name: name of the dog
 * @age: Age of the dog
 * @owner: onwer of the dog
 *
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		;
	else
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
