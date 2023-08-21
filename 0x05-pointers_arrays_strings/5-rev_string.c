/**
* reverse_string - reverse_string
* @s: string
* @size: string size
*/
void reverse_string(char *s, int size)
{
	int length;
	int i;
	char tmp;

	length = size;
	for (i = 0; i < length / 2; i++)
	{
		tmp = s[i];
		s[i] = s[length - i - 1];
		s[length - i - 1] = tmp;
	}
}

/**
* rev_string - rev_string
* @s: input
*/
void rev_string(char *s)
{
	int i, len;

	i = 0;
	for (len = 0; *(s + i) != '\0'; i++)
	{
		len++;
	}

	reverse_string(s, len);
}
