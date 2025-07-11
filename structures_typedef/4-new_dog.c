#include <stdio.h>
#include "dog.h"
#include <stdlib.h>
#include <string.h>
/**
 * new_dog - creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: pointer to the new dog, or NULL if it fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *Dog;
	int i = 0;
	int j = 0;

	Dog = malloc(sizeof(dog_t));
	if (Dog == NULL)
	{
		return (NULL);
	}

	Dog->name = malloc(strlen(name) + 1);
	if (Dog->name == NULL)
	{
		free(Dog);
		return (NULL);
	}

	Dog->owner = malloc(strlen(owner) + 1);
	if (Dog->owner == NULL)
	{
		free(Dog);
		return (NULL);
	}
	while (name[i] != '\0')
	{
		Dog->name[i] = name[i];
		i++;
	}
	while (owner[j] != '\0')
	{
		Dog->owner[j] = owner[j];
		j++;
	}
	Dog->age = age;

	return (Dog);
}
