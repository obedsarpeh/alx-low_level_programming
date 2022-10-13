#include "dog.h"
#include <stdlib.h>
/**
 * init_dog - description of dog
 * @d: to be initialized 
 * @name: pointer to char
 * @age: pointer to age
 * @owner: pointer to owner
 *
 * Description of dog
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
