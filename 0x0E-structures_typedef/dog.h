#ifndef DOG
#define DOG

/**
 * struct dog -defines a new struct with members
 * @name: name of dog
 * @age: age of dog
 * @owner: owner dog
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
}
dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif /*DOG*/
