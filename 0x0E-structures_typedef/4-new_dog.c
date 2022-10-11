#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

/**
 * _strlen - Get string length
 * @s: string argument
 *
 * Return: int (string length count)
 */

int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		;
	return (i);
}

/**
 *  *_strcpy - Copy string to pointer
 * @src: Source string
 * @dest: destination pointer
 *
 * Return: Pointer to string
 */

char *_strcpy(char *src, char *dest)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
		dest[i] = src[i];

	dest[i] = '\0';

	return (dest);
}

/**
 * new_dog - Create new dog
 * @name: str argument
 * @age: int argument
 * @owner: str argument
 *
 * Return: Pointer to dog_t type
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	int name_len = _strlen(name);
	int owner_len = _strlen(owner);
	dog_t *nd;

	printf("%d \n%d\n", name_len, owner_len);

	nd = malloc(sizeof(dog_t));

	if (nd == NULL)
	{
		free(nd);
		return (NULL);
	}

	nd->name = malloc(sizeof(char) * name_len + 1);

	if (nd->name == NULL)
	{
		free(nd);
		return (NULL);
	}
	nd->name = _strcpy(name, nd->name);

	nd->age = age;

	nd->owner = malloc(sizeof(char) * (owner_len + 1));
	if (nd->owner == NULL)
	{
		free(nd->name);
		free(nd);
		return (NULL);
	}
	nd->owner = _strcpy(owner, nd->owner);

	return (nd);


}
