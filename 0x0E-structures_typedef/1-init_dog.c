#include "dog.h"

/**
 * init_dog - initialize variable of struct
 * @d: the struct
 * @name: string
 * @age: float
 * @owner: string
 * Return: no
 */

init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d.name = name;
		d.age = age;
		d.owner = owner;
	}
}
