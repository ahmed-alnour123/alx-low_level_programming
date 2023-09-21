#ifndef DOG_H
#define DOG_H
/**
 * struct dog - dog struct
 * @name: parameter
 * @age: parameter
 * @owner: parameter
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
#endif
