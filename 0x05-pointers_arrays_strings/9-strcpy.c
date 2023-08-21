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
	return (dest);
}
