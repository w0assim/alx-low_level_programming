#ifndef DOG_H
#define DOG_H

/**
 * struct dog - struct for a dog
 * @name: name of dog
 * @age: dog age
 * @owner: dog owner
 */


struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif

