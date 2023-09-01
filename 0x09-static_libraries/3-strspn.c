/**
* _strspn - _strspn
* @s: input
* @accept: input
* Return: unsigned int
*/
unsigned int _strspn(char *s, char *accept)
{
	int n, i, len, found;

	n = 0;
	len = 0;

	while (accept[len++] != '\0')
	{

	}
	len--;

	while (*s != '\0')
	{
		found = 0;
		for (i = 0; i < len; i++)
		{
			if (*s == accept[i])
			{
				n++;
				found = 1;
				break;
			}
		}
		s++;
		if (!found)
			break;
	}

	return (n);
}
