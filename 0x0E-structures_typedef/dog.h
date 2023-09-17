#ifndef DOG_H
#define DOG_H

/**
 * struct dog - struct
 * @name: struct object name
 * @age: struct object age
 * @owner: struct object owner
*/

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
