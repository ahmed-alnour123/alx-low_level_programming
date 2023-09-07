#include "main.h"
#include <stdlib.h>
/**
* _calloc - calloc
* @nmemb: number of members
* @size: size of each memeber
* Return: void pointer
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	void *result;

	if (nmemb == 0 || size == 0)
		return (0);

	result = malloc(nmemb * size);
	if (result == 0)
		return (0);

	for (i = 0; i < nmemb * size; i++)
	{
		*((char *) result + i) = 0;
	}

	return (result);
}
