#include <stdlib.h>
#include "dog.h"

/**
 * _strlen - computes the length of a string
 * @s: the string
 *
 * Return: length of the string
 */
int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
		len++;
	return (len);
}

/**
 * _strdup_copy - copies a string into newly allocated memory
 * @s: the string to copy
 *
 * Return: pointer to the copy, or NULL on failure
 */
char *_strdup_copy(char *s)
{
	char *copy;
	int i, len;

	len = _strlen(s);
	copy = malloc(len + 1);
	if (copy == NULL)
		return (NULL);
	for (i = 0; i <= len; i++)
		copy[i] = s[i];
	return (copy);
}

/**
 * new_dog - creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: pointer to the new dog, or NULL on failure
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	if (name == NULL || owner == NULL)
		return (NULL);

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	dog->name = _strdup_copy(name);
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}

	dog->owner = _strdup_copy(owner);
	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}

	dog->age = age;
	return (dog);
}
