#ifndef DOG_H
#define DOG_H
/**
 * struct dog - basic info of a dog
 * @name: 1st member
 * @age: 2nd member
 * @owner: 3rd member
 *
 * Description: Longer description
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;
#endif
#ifndef _FUNCTIONS_H
#define _FUNCTIONS_H
int _putchar(char c);
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
