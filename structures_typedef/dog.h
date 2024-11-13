#ifndef __DOG_H__
#define __DOG_H__

#include <stdio.h>
#include <stdlib.h>

/**
 * init_dog - dog structure
 * @d: the struct
 * @name: dog's name
 * @age: dog's age
 * @owner: the owner of dog
 */


void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;
	d->name = name;
	d->age = age;
	d->owner = owner;
}
#endif
