#include "dog.h"
#include <stdio.h>

/**
 *init_dog - initializes a variable of type struct dog
 * @d: pointer to variable to be initialized
 * @name: The name
 * @age: The age
 * @owner: The owner
 *
 * Return: nothing
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
