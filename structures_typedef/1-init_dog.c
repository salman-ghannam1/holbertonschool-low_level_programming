#include "main.h"
#include "dog.h"
#include <stddef.h>

/**
 * init_dog - initializes a variable of type struct dog
 * @d: pointer to struct dog
 * @name: pointer to the dog's name
 * @age: dog's age
 * @owner: pointer to the owner's name
 *
 * Return: Nothing
 */
void init_dog(dog_t *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;

	d->name = name;
	d->age = age;
	d->owner = owner;
}
