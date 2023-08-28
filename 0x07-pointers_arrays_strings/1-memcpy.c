/**
* _memcpy - memcpy
* @dest: input
* @src: input
* @n: input
* Return: char
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i;

	i = 0;
	while (n--)
		dest[i++] = *src++;

	return (dest);
}
