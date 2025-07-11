#include <stdio.h>
#include "dog.h"
#include <stdlib.h>
/** * free_dog - frees memory allocated for a dog structure
 * @d: pointer to the dog structure to free
 *
 * Description: This function frees the memory allocated for the name and owner
 * strings of a dog structure, as well as the structure itself.
 */
void free_dog(dog_t *d)
{
if (d == NULL)
return;

free(d->name);
free(d->owner);
free(d);
}
