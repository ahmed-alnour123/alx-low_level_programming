/**
* _memset - memset
* @s: input
* @b: input
* @n: input
* Return: char
*/
char *_memset(char *s, char b, unsigned int n)
{
	int i;

	i = 0;
	while (n--)
		s[i++] = b;
	s[i++] = '\0';

	return (s);
}
