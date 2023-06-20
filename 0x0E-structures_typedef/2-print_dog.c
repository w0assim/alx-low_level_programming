/**
 *
 *
 *
 *
 */

void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (name != NULL)
		{
			printf("%s", name);
		}
		else
		{
			printf("(nil)");
		}
		if (age != NULL)
		{
			printf("%f", age);
		}
		else
		{
			printf("(nil)")
		}
		if (owner != NULL)
		{
			printf("%s", owner);
		}
		else
		{
			printf("(nil)");
		}
	}
}

