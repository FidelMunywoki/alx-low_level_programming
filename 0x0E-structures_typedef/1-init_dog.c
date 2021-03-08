#include "dog.h"
#include <stdio.h>
#include "holberton.h"

/**
 * init_dog - initialize a variable of type struct dog
 * @d: struct dog
 * @name: str - dog's name
 * @age: int dog's age
 * @owner: str, dog's owner
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
