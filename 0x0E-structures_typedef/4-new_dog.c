#include "dog.h"
#include <stdlib.h>

/**
 * _strlen - function that return length of str
 *
 * @str: takes input
 * Return: return the length of str
 */

int _strlen(char *str)
{
	int i = 0;

	while (str[i])
		i++;
	return (i);
}

/**
 * _strcpy - function that copy str from src to dest
 *
 * @src: takes input
 * @dest: place to copy the str
 * Return: return the copy
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i]  = '\0';
	return (dest);
}

/**
 * new_dog - function that creats a new dog
 *
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 * Return: dog's info otherwise return NULL
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	if (!name || age < 0 || !owner)
		return (NULL);
	dog = malloc(sizeof(dog_t));
	if (!dog)
		return (0);
	dog->name = malloc(sizeof(char) * _strlen(name) + 1);
	if (!dog->name)
	{
		free(dog);
		return (NULL);
	}
	dog->owner = malloc(sizeof(char) * _strlen(owner) + 1);
	if (!dog->owner)
	{
		free(dog);
		free(dog->name);
		return (NULL);
	}
	dog->name = _strcpy(dog->name, name);
	dog->age = age;
	dog->owner = _strcpy(dog->owner, owner);
	return (dog);
}
