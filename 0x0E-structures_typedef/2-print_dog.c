/**
 *print_dog - dog print
 *Return: void
 *@d: dog
 */

void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (name != NULL)
		{
			printf("Name: %s\n", name);
		}
		else
		{
			printf("Name: (nil)\n");
		}
		if (age != NULL)
		{
			printf("Age: %f\n", age);
		}
		else
		{
			printf("Age: (nil)\n");
		}
		if (owner != NULL)
		{
			printf("Owner: %s\n", owner);
		}
		else
		{
			printf("Owner: (nil)\n");
		}
	}
}

