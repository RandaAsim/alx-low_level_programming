#include "dog.h"

/**
 * init_dog - program
 * @d: input
 * @name: input string
 * @age: num
 * @owner: input string
 * Return: void
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		(*d).name = name;
		(*d).age = age;
		(*d).owner = owner;
	}
}
