#include "dog.h"
#include <stdio.h>
/**
 * print_dog - prints the details of a dog structure
 * @d: pointer to the dog structure to print
 *
 * Description: This function prints the name, age, and owner of a dog.
 * If any of these fields are NULL, it prints "(nil)" for that field.
 */
void print_dog(struct dog *d)
{
if (d == NULL)
{
return;
}
if (d->name == NULL)
{
printf("Name: (nil)\n");
}
else
{
printf("Name: %s\n", d->name);
}
printf("Age: %f\n", d->age);
if (d->owner == NULL)
{
printf("Owner: (nil)\n");
}
else
{
printf("Owner: %s\n", d->owner);
}
}
