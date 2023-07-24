#ifndef DOG_HEADER
#define DOG_HEADER
/**
 * struct dog - dog object which contains the dog's infos
 * @name: the dog's name
 * @age: the dog's age
 * @owner: the owner name
 *
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
