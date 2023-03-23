#ifndef DOG_H
#define DOG_H

/**
 * struct dog - new type for a dog struct
 * @name: pointer to name string
 * @age: variable of float type
 * @owner: pointer to owner string
 *
 * Description: Longer description
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif /* #ifndef DOG_H */
