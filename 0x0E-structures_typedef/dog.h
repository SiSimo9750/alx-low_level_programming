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

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
char *_strcpy(char *dest, char *src);
int _strlen(char *s);
void free_dog(dog_t *d);
#endif
