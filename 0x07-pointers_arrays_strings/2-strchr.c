/**
* _strchr - _strchr
* @s: input
* @c: input
* Return: char
*/
char *_strchr(char *s, char c)
{
	char *loc;

	loc = 0;
	if (*s == c)
	  return (s);

	while (*s != '\0')
	{
		if (*s != c)
		{
      s++;
      continue;
		}
		return (s);
	}

	return (loc);
}
