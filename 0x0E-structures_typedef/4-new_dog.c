#include "dog.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 *new_dog - create dog
 *@name: name of dog
 *@age: age dog
 *@owner: dog owner
 *Return: type dog
 */


dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t dog;
	dog_t *my_dog = &dog;
	int len_name=1;
	int len_owner=1;
	char c=name[0];
	
	while (c != '\0')
	{
		len_name++;
		c++;
	}
	c=owner[0];
	while (c != '\0')
	{
		len_owner++;
		c++;
	}
	
	char stored_name[len_name];
	char stored_owner[len_owner];
	strcpy(name, stored_name);
	strcpy(owner, stored_owner);

	if (my_dog != NULL)
	{
		my_dog->name = &stored_ name;
		my_dog->age = age;
		my_dog->owner = &stored_owner;
	}
	else
	{
		return (NULL);
	}
	return (my_dog);
}

