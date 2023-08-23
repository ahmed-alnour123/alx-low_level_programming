/**
* _strncat - strncat
* @dest: input
* @src: input
* @n: bytes
* Return: string
*/
char *_strncat(char *dest, char *src, int n)
{
	int index = 0;

	while (dest[index] != '\0')
		index++;

	while (*src != '\0' && n-- > 0)
	{
		dest[index++] = *src++;
	}
	dest[index] = '\0';

	return (dest);
}
