#include <stdio.h>
#include "dog.h"
#include <stdlib.h>
#include <string.h>
/**
 * new_dog - creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 * Return: pointer to the new dog, or NULL if it fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *my_dog;
	int name_len = 0;
	int owner_len = 0;

	while (name[name_len] != '\0')
	{
		name_len++;
	}
	while (owner[owner_len] != '\0')
	{
		owner_len++;
	}
	my_dog = malloc(sizeof(dog_t));
	if (my_dog == NULL)
	{
		return (NULL);
	}
	my_dog->name = malloc(strlen(name) + 1);
	if (my_dog->name == NULL)
	{
		free(my_dog);
		return (NULL);
	}
	strcpy(my_dog->name, name);
	my_dog->owner = malloc(strlen(owner) + 1);
	if (my_dog->owner == NULL)
	{
		free(my_dog->name);
		free(my_dog);
		return (NULL);
	}
	strcpy(my_dog->owner, owner);
	my_dog->age = age;
	return (my_dog);
}
