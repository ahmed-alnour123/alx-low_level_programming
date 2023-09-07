/**
* _calloc - calloc
* @nmemb: number of members
* @size: size of each memeber
* Return: void pointer
*/
#include <stdlib.h>
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	void *result;

	if (nmemb == 0 || size == 0)
		return (0);

	result = malloc(nmemb * size);
	if (result == 0)
		return (0);

	for (i = 0; i < nmemb; i += size)
	{
		/* result[i] = 0; */
	}

	return (result);
}
