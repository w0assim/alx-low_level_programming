/**
 *new_dog - create dog
 *@name: name of dog
 *@age: age dog
 *@owner: dog owner
 *Return: type dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *my_dog;

	my_dog->name = name;
	my_dog->age = age;
	my_dog->owner = owner;
}

