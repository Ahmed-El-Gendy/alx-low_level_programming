#ifndef FILE_DOG
#define FILE_DOG

/**
 * struct dog - struct
 * @name: the name
 * @age: the age
 * @owner: the owner
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
