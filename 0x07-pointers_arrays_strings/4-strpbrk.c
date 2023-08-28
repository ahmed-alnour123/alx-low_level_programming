/**
* _strpbrk - _strpbrk
* @s: input
* @accept: input
* Return: char
*/
char *_strpbrk(char *s, char *accept)
{
	int i, len, found;

	len = 0;

	while (accept[len++] != '\0')
	{

	}
	len--;

	found = 0;
	while (*s != '\0')
	{
		for (i = 0; i < len; i++)
		{
			if (*s == accept[i])
			{
				found = 1;
				break;
			}
		}
		if (found)
			break;
		s++;
	}

	return (found ? s : 0);

}
