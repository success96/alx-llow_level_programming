#include "dog.h"
#include <stdio.h>

/**
 * init_dog - initializes a variable of struct dog
 * @d: struct
 * @name: pointer to char
 * @age: dog age
 * @owner: pointer to char
 * Return: no return value in a void function
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
