#include <stdio.h>
#include <stdlib.h>
/**
 * _strlen - calculate string length excluding null-terminator
 * @s: input
 * Return: length
 */
int _strlen(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen(++s));
}

/**
* string_nconcat - string_nconcat
* @s1: input
* @s2: input
* @n: input
* Return: string
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1;
	unsigned int len2;
	unsigned int idx;
	unsigned int i;
	char *result;

	if (s1 == 0)
		len1 = 0;
	else
		len1 = _strlen(s1);

	if (s2 == 0)
		len2 = 0;
	else
		len2 = _strlen(s2);

	len2 = len2 <= n ? len2 : n;

	result = malloc((len1 + len2 + 1) * sizeof(char));
	if (result == 0)
		return (0);

	idx = 0;
	for (i = 0; i < len1; i++)
	{
		result[idx] = s1[i];
		idx++;
	}

	for (i = 0; i < len2; i++)
	{

		result[idx] = s2[i];
		idx++;
	}
	result[idx] = '\0';
	return (result);
}
