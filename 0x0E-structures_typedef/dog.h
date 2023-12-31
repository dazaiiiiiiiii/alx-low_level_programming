#ifndef DOG_H
#define DOG_H

/**
 * struct dog -a dog's struct
 *
 * @name: dog's name
 * @owner: dog's owner
 * @age: dog's age
 */

struct dog
{
	char *name;
	char *owner;
	float age;
};

/**
 * dot_t - type for struct dog
 * typedef struct dog dog_t;
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
