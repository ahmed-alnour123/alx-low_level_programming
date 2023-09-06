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
 * argstostr - argstostr
 * @ac: input
 * @av: input
 * Return: char
 */
char *argstostr(int ac, char **av)
{
	int i;
	int total_length;
	int words;
	char *result;

	if (ac <= 0 || av == NULL)
		return (NULL);
	total_length = 0;

	for (i = 0; i < ac; i++)
	{
		total_length += _strlen_recursion(av[i]);
	}
	total_length += ac;

	result = malloc(total_length * sizeof(char));
	i = 0;
	words = 0;
	while (words < ac)
	{
		if (**av == '\0')
		{
			result[i++] = '\n';
			words += 1;
			av++;
			continue;
		}
		result[i++] = **av;
		(*av)++;
	}

	return (result);
}
