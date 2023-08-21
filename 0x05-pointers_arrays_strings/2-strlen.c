/**
* _strlen - get string length
* @s: input
* Return: string length
*/
int _strlen(char *s)
{
	int len;

	for (len = 0; *s != '\0'; s++)
	{
		len++;
	}

	return (len);
}
