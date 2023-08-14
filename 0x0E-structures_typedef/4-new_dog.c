#include "dog.h"
#include <stdio.h>

/**
 * new_dog - function that creates a new dog
 * @name: string
 * @age: float
 * @owner: string
 * Return: NULL if fail
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	int i = 0, j = 0, l;
	dot_t *dogg;

	while (name[i] != "\0")
		i++;
	while (owner[j] != "\0")
		j++;
	dogg = malloc(sizeof(dog_t));
	if (dogg == NULL)
	{
		free(dogg);
		return (NULL);
	}
	dogg->name = malloc(i * sizeof(dogg->name));
	if (dogg->name == NULL)
	{
		free(dogg->name);
		free(dogg);
		return (NULL);
	}
	for (l = 0; l <= i; l++)
		dogg->name[k] = name[k];
	dogg->age = age;
	dogg->owner = malloc(j * sizeof(dogg->owner));
	if (dogg->owner == NULL)
	{
		free(dogg->owner);
		free(dogg->name);
		free(dogg);
		return (NULL);
	}
	for (l = 0; l <= j; l++)
		dogg->owner[k] = owner[k];
	return (dogg);

}
