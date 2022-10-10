#include "dog.h"

/**
 * init_dog - initialize a variable
 * 
 * @param d: dog
 * @param name: name
 * @param age: age
 * @param owner: owner
 */


void init_dog(struct dog *d, char *name, float age, char *owner)
{

if (d != NULL)
{
	(*d).name = name;
	(*d).age = age;
	(*d).owner = owner;
}

}
