#include <stdlib.h>
#include "dog.h"
/**
 * _strlen - will give the length of the input string
 * @s: input string
 *
 * Return: will returne the result
 */

int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	return (i);
}

/**
 * _strcpy - will allow us to copy a string
 *
 * @dest: distination pointer
 * @src: source pointer
 *
 * Return: pointer to destination
 */
char *_strcpy(char *dest, char *src)
{
	char *a = dest;

	while (*src)
		*a++ = *src++;
	*a = '\0';
	return (dest);
}

/**
 * new_dog - creates a new dog_t variabl
 * @name: his name
 * @age: his age
 * @owner: owner name
 *
 * Return: pointer to the new variable, NULL if failed
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int name_len, owner_len;

	name_len = _strlen(name);
	owner_len = _strlen(owner);

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	dog->name = malloc(sizeof(char) * (name_len + 1));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->owner = malloc(sizeof(char) * (owner_len + 1));
	if (dog->owner == NULL)
	{
		free(dog);
		free(dog->name);
		return (NULL);
	}
	_strcpy(dog->name, name);
	_strcpy(dog->owner, owner);
	dog->age = age;

	return (dog);
}

