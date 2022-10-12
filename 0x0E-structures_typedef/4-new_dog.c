#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * new_dog - creates a new dog
 * @name: name of new dog
 * @age: age of new dog
 * @owner: name of owner of ne dog
 *
 * Return: pointer to new dog or NULL
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;
	char *s_name, *s_owner;
	int n = 0, w = 0;

	if (name == 0 || owner == 0)
	{
		return (NULL);
	}
	n = _strlen(name);
	w = _strlen(owner);

	s_name = malloc(n + 1);
	if (s_name == NULL)
		return (NULL);
	s_owner = malloc(w + 1);
	if (s_owner == NULL)
	{
		free(s_name);
		return (NULL);
	}
	d = malloc(sizeof(dog_t));
	if (d == NULL)
	{
		free(s_name);
		free(s_owner);
		return (NULL);
	}
	_strcpy(s_name, name);
	_strcpy(s_owner, owner);

	d->name = s_name;
	d->owner = s_owner;
	d->age = age;
	return (d);
}

/**
 * _strlen - length of string
 * @s: the string
 * Return: length
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
 * _strcpy - copies a string pointed to by src to dest
 * @dest: the destination
 * @src: the source
 * Return: Pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
