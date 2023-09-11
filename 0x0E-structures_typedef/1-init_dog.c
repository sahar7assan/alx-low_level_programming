#include "dog.h"
/**
 * init_dog - function initialize variable of type struct
 * @d: pointer to struct
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 *
 * Return: dog info
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
