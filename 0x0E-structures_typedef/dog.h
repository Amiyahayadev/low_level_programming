#ifndef DOG_H
#define DOG_H

/**
 * struct dog - user defined type for dogs
 * @name: member 1 is pointer to name string
 * @age: member 2 is age of float type
 * @owner: member 3 is pointer to owner string
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
int _strlen(char *s);
char *_strdup(char *str);
char *_memcpy(char *dest, char *src, unsigned int n);

#endif /* DOG_H already exists */
