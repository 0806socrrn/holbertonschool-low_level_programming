#ifndef _DOG_
#define _DOG_

/**
 * struct dog - Dog with a few
 * @name: name
 * @age: age
 * @owner: owner
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - Typedef for dog struct
 */
typedef struct dog dog_t;

/**
 * Prototypes - Prototypes for functions
 * @d: pointer to dog
 * @name: Dog name
 * @age: Dog age
 * @owner: Dog owner name
 */

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
char *dup_strint(char *s);
void free_dog(dog_t *d);

#endif
