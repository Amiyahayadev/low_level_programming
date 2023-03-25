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

typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
char *_strdup(char *str);
#endif /* #ifndef DOG_H */
