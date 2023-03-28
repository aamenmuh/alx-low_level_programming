#include "dog.h"
/**
 * init_dog - initializes a dog
 * @d: pointer to the dog
 * @name: pointer to the name
 * @age: value of age
 * @owner: pointer to the owner
**/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
