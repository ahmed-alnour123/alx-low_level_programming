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
* _strdup - _strdup
* @str: input
* Return: char
*/
char *_strdup(char *str)
{
	int len;
	int i;
	char *result;

	if (str == 0)
		return (0);

	i = 0;
	len = _strlen_recursion(str) + 1;
	result = malloc(sizeof(char) * len);
	if (result == 0)
		return (0);
	while (i < len)
	{
		result[i] = str[i];
		i++;
	}

	return (result);
}
