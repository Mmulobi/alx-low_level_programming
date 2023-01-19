#include "dog.h"
#include <stdio.h>
#include <stdlib,h>
/**
 * _strdup - returns a pointer to a newly allocated memory
 * @str: pointer argument
 *
 * Return: pointer
 */
char *_strdup(char *str)
{
	char *poin = NULL;
	int i, j = 0;

	if (str == NULL)
		return (NULL);

	for (i = 0; *(str + i); i++)
	{
		j++;
	}
	j++;
	poin = malloc(j * sizeof(char));

	if (poin == NULL)
		return (NULL);
	for (i = 0; i < j; i++)
		*(poin + i) = *(str + i);
	return (poin);
}

/**
 * new_dog - creates a new dog
 * @name: char pointer
 * @age: char poinmter
 * @owner: char pointer
 *
 * Return: dog_t pointer
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	char *nombre = NULL, *dueno = NULL;
	dog_t *dog;

	if (name != NULL)
	{
		nombre = _strdup(name);
		if (nombre == NULL)
			return (NULL);
	}
	if (owner != NULL)
	{
		dueno = _strdup(owner);
		if (dueno == NULL)
		{
			free(nombre);
			return (NULL);
		}
	}
	dog = (dog_t *) malloc(sizeof(dog_t));
	if (dog == NULL)
	{
		free(nombre);
		free(dueno);
		return (NULL);
	}
	dog->name = nombre;
	dog->age = age;
	dog->owner = dueno;
	return (dog);
}

