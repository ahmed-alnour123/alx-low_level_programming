#include <stdlib.h>

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
* str_concat - str_concat
* @s1: input
* @s2: input
* Return: char
*/
char *str_concat(char *s1, char *s2)
{
	int len1, len2;
	int i, ii;
	char *result;

	len1 = _strlen_recursion(s1);
	len2 = _strlen_recursion(s2);

	i = 0;
	ii = 0;
	result = malloc(sizeof(char) * (len1 + len2 + 1));


	while (ii < len1)
	{
		result[i] = s1[ii];
		i++;
		ii++;
	}

	ii = 0;
	while (ii < len2)
	{
		result[i] = s2[ii];
		i++;
		ii++;
	}

	result[i] = '\0';

	return (result);
}
