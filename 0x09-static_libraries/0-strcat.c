/**
* _strcat - strcat
* @dest: input
* @src: input
* Return: string
*/
char *_strcat(char *dest, char *src)
{
	int len = 0;

	while (dest[len] != '\0')
		len++;

	while (src[len] != '\0')
	{
		dest[len++] = *src++;
	}
	dest[len] = '\0';

	return (dest);
}
