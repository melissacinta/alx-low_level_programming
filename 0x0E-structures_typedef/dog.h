#ifndef DOG_H
#define DOG_H

/**
 * struct dog - a structure containing 3 elements of different types
 * @name: name of the dog pointer to a char
 * @age: age ofthe dog, pointer to a float
 * @owner: owner of the dog, pointer to char
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
