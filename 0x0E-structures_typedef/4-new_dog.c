#include "dog.h"
#include <stdlib.h>

/**
* _strcpy - copies string src to dest
* @dest: destination string
* @src: source string
* Return: pointer to dest
*/
char *_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (*src != '\0')
	{
		dest[i++] = *src++;
	}
	dest[i++] = *src++;
	return (dest);
}

/**
* _strlen_recursion - _strlen_recursion
* @s: input
* Return: length
*/
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + _strlen_recursion(++s));
}

/**
* new_dog - new_dog
* @name: input
* @age: input
* @owner: input
* Return: new dog
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	int len_name, len_owner;
	char *name_str, *owner_str;
	dog_t *dog;

	len_name = _strlen_recursion(name);
	len_owner = _strlen_recursion(owner);

	name_str = malloc(sizeof(char) * (len_name + 1));
	owner_str = malloc(sizeof(char) * (len_owner + 1));
	dog = malloc(sizeof(dog_t));

	if (dog == 0 || name_str == 0 || owner_str == 0)
		return (0);

	_strcpy(name_str, name);
	_strcpy(owner_str, owner);

	dog->name = name;
	dog->age = age;
	dog->owner = owner;

	return (dog);
}
