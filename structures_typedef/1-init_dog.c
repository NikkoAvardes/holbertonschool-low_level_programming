#include <stdio.h>
#include "dog.h"
/**
 * init_dog - Initializes a variable of type struct dog.
 * @d: Pointer to a struct dog to initialize.
 * @name: The name of the dog.
 * @age: The age of the dog.
 * @owner: The owner of the dog.
 *
 * Return: None.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	{
		return;
	}

		d->name = name;
		d->age = age;
		d->owner = owner;

}
