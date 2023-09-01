/**
* _strlen_recursion - _strlen_recursion
* @s: input
* Return: length
*/
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + _strlen_recursion(++s));
}
